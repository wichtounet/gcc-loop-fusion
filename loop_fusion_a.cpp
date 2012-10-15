#include <iostream>

static const unsigned long SIZE = 100000000;

/*
 * Simple examples of loops that can merged. 
 *
 * Can be used as a base file for benchmarking.
 */

int main(){
    unsigned long* array = new unsigned long[SIZE];

    unsigned long sum = 0; 
    
    //This loop won't be merged    
    for(unsigned long i = 0; i < 50; ++i){
        //This loop should be merged with the following
        for(unsigned long j = 0; j < SIZE; ++j){
            array[j] = j;
        }

        //This loop should be merged with the previous 
        for(unsigned long j = 0; j < SIZE; ++j){
            sum = array[j];
        }
    }

    //This loop won't be merged    
    /*for(unsigned long j = 0; j < SIZE; ++j){
        array[j] = j;
    }*/

    std::cout << sum << std::endl;

    delete[] array;

    return 0;
}
