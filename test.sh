echo "Compile all samples"

echo "A"
../gcc-trunk-install/bin/g++ -ftree-loop-fusion -O3 loop_fusion_a.cpp

echo "B"
../gcc-trunk-install/bin/g++ -ftree-loop-fusion -O3 loop_fusion_b.cpp

echo "C"
../gcc-trunk-install/bin/g++ -ftree-loop-fusion -O3 loop_fusion_c.cpp

echo "D"
../gcc-trunk-install/bin/g++ -ftree-loop-fusion -O3 loop_fusion_d.cpp

echo "E"
../gcc-trunk-install/bin/g++ -ftree-loop-fusion -O3 loop_fusion_e.cpp

echo "F"
../gcc-trunk-install/bin/g++ -ftree-loop-fusion -O3 loop_fusion_f.cpp

echo "G"
../gcc-trunk-install/bin/g++ -ftree-loop-fusion -O3 loop_fusion_g.cpp
