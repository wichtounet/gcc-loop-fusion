#include <iostream>

static const unsigned long SIZE = 100000000L;

/*
 * Merged correctly by the algorithm. 
 * The additional PHI is copied from the second loop to the first one. 
 * Can be used as benchmark. 
 */

int main(){
    unsigned long* array = new unsigned long[SIZE];

    unsigned long sum = 0; 
    
    //This loop won't be merged    
    for(unsigned long j = 0; j < 50; ++j){
        //This loop should be merged with the following
        for(unsigned long i = 0; i < SIZE; ++i){
            array[i] = i;
        }

        //This loop should be merged with the previous 
        for(unsigned long i = 0; i < SIZE; ++i){
            sum += array[i];
        }
    }

    std::cout << sum << std::endl;

    delete[] array;

    return 0;
}
