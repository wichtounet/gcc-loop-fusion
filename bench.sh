echo "Launch all the benchmarks"

echo "A"
echo "Without fusion"
../gcc-trunk-install/bin/g++ -O3 loop_fusion_a.cpp
time ./a.out
echo "With fusion"
../gcc-trunk-install/bin/g++ -ftree-loop-fusion -O3 loop_fusion_a.cpp
time ./a.out

echo "B"
echo "Without fusion"
../gcc-trunk-install/bin/g++ -O3 loop_fusion_b.cpp
time ./a.out
echo "With fusion"
../gcc-trunk-install/bin/g++ -ftree-loop-fusion -O3 loop_fusion_b.cpp
time ./a.out

echo "C"
echo "Without fusion"
../gcc-trunk-install/bin/g++ -O3 loop_fusion_c.cpp
time ./a.out
echo "With fusion"
../gcc-trunk-install/bin/g++ -ftree-loop-fusion -O3 loop_fusion_c.cpp
time ./a.out

echo "D"
echo "Without fusion"
../gcc-trunk-install/bin/g++ -O3 loop_fusion_d.cpp
time ./a.out
echo "With fusion"
../gcc-trunk-install/bin/g++ -ftree-loop-fusion -O3 loop_fusion_d.cpp
time ./a.out

echo "E"
echo "Without fusion"
../gcc-trunk-install/bin/g++ -O3 loop_fusion_e.cpp
time ./a.out
echo "With fusion"
../gcc-trunk-install/bin/g++ -ftree-loop-fusion -O3 loop_fusion_e.cpp
time ./a.out

echo "F"
echo "Without fusion"
../gcc-trunk-install/bin/g++ -O3 loop_fusion_f.cpp
time ./a.out
echo "With fusion"
../gcc-trunk-install/bin/g++ -ftree-loop-fusion -O3 loop_fusion_f.cpp
time ./a.out

echo "G"
echo "Without fusion"
../gcc-trunk-install/bin/g++ -O3 loop_fusion_g.cpp
time ./a.out
echo "With fusion"
../gcc-trunk-install/bin/g++ -ftree-loop-fusion -O3 loop_fusion_g.cpp
time ./a.out
