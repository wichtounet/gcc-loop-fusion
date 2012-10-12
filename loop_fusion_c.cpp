#include <iostream>

static const unsigned long SIZE = 100000000;

/*
 * Test to verify the fusion of more than two loops
 * 
 * Currently, only two loops are fused, because the distance between the next ones is too high,
 * some more cleaning will be necessary before it can be merged again.
 */

int main(){
    unsigned long* array_1 = new unsigned long[SIZE];
    unsigned long* array_2 = new unsigned long[SIZE];

    unsigned long sum = 0; 
    
    //This loop won't be merged    
    for(unsigned long i = 0; i < 50; ++i){
        for(unsigned long i = 0; i < SIZE; ++i){
            array_1[i] = i;
        }

        for(unsigned long i = 0; i < SIZE; ++i){
            sum += array_1[i];
        }
        
        for(unsigned long i = 0; i < SIZE; ++i){
            array_2[i] = array_1[i];
        }
    }

    std::cout << sum << std::endl;

    delete[] array_1;
    delete[] array_2;

    return 0;
}
