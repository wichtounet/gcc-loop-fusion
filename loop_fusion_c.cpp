#include <iostream>

static const unsigned long SIZE = 100000000L;

/*
 * Test to verify the fusion of more than two loops.
 */

int main(){
    unsigned long* array_1 = new unsigned long[SIZE];
    unsigned long* array_2 = new unsigned long[SIZE];

    unsigned long sum = 0; 
    
    //This loop won't be merged    
    for(unsigned long j = 0; j < 50; ++j){
        //This loop should be merged
        for(unsigned long i = 0; i < SIZE; ++i){
            array_1[i] = i;
        }

        //This loop should be merged
        for(unsigned long i = 0; i < SIZE; ++i){
            sum += array_1[i];
        }
        
        //This loop should be merged
        for(unsigned long i = 0; i < SIZE; ++i){
            array_2[i] = array_1[i];
        }
    }

    std::cout << sum << std::endl;

    delete[] array_1;
    delete[] array_2;

    return 0;
}
