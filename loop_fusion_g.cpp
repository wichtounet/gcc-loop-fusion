#include <iostream>

static const unsigned long SIZE = 100000000;

/*
 * Test to verify illegal loops. 
 *
 * These loops cannot be merged. 
 */

int main(){
    unsigned long* A = new unsigned long[SIZE+1];
    unsigned long* B = new unsigned long[SIZE+1];
    
    for(unsigned long i = 0; i < SIZE; ++i){
        A[i] = 2;
    }

    for(unsigned long i = 0; i < SIZE; ++i){
        B[i] = 1 + A[i+1];
    }

    std::cout << B[SIZE-2] << std::endl;

    delete[] A;
    delete[] B;

    return 0;
}
