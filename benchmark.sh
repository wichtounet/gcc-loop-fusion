#!/bin/bash

echo "Launch all the benchmarks"

float_scale=2

function float_eval(){
    local stat=0
    local result=0.0
    if [[ $# -gt 0 ]]; then
        result=$(echo "scale=$float_scale; $*" | bc -q 2>/dev/null)
        stat=$?
        if [[ $stat -eq 0  &&  -z "$result" ]]; then stat=1; fi
    fi
    echo $result
    return $stat
}

function compute() {
    file=times.log
    cnt=0

    samples=(`grep --color=never  real ${file} | awk '{print $2}' | cut -dm -f2 | cut -ds -f1`)

    for sample in `grep --color=never real ${file} | awk '{print $2}' | cut -dm -f2 | cut -ds -f1`; do
        cnt=$(echo ${cnt}+${sample} | bc -l)
    done

    # Calculate the 'Mean' average (sum / samples).
    mean_avg=$(echo ${cnt}/${#samples[@]} | bc -l)
    mean_avg=$(echo ${mean_avg} | cut -b1-6)

    printf " %s" ${mean_avg}
}

function run_time() {
    for i in {1..10}
    do
        /usr/bin/time -p -a -o times.log ./a.out > /dev/null
    done

    compute
    rm times.log
}

function bench() {
    printf "%d" $1
    ../gcc-trunk-install/bin/g++ -fno-tree-loop-fusion -O2 $2 > /dev/null
    run_time
    ../gcc-trunk-install/bin/g++ -O2 $2 > /dev/null
    run_time
    print "\n"
}

bench 1 bench_read_read.cpp
bench 2 bench_read_write.cpp
bench 3 bench_write_write.cpp
bench 4 bench_write_read.cpp
bench 5 bench_crossed.cpp
bench 6 bench_mixed.cpp
bench 7 bench_copies.cpp
