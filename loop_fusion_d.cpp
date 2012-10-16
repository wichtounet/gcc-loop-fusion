#include <iostream>

static const unsigned long SIZE = 100000000L;

/*
 * Verify the PHI nodes between the two blocks.
 *
 * The loops won't be merged because of the PHI node between the two loops.
 */

int main(){
    unsigned long* array = new unsigned long[SIZE];

    unsigned long sum = 0; 
        
    //This loop won't be merged
    for(unsigned long i = 0; i < SIZE; ++i){
        array[i] = i;
    }
    
    //This loop won't be merged    
    for(unsigned long j = 0; j < 25; ++j){
        //This loop won't be merged
        for(unsigned long i = 0; i < SIZE; ++i){
            sum += array[i];
        }

        //This loop won't be merged
        for(unsigned long i = 0; i < SIZE; ++i){
            sum += array[i];
        }
    }

    std::cout << sum << std::endl;

    delete[] array;

    return 0;
}
