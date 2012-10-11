#include <iostream>

static const unsigned long SIZE = 100000000;

/*
 * Currently, these loops are not supported for merging. 
 * Because of the added PHI node for the sum incrementation
 */

int main(){
    unsigned long* array = new unsigned long[SIZE];

    unsigned long sum = 0; 
    
    //This loop should be merged with the following
    for(unsigned long i = 0; i < SIZE; ++i){
        array[i] = i;
    }

    //This loop should be merged with the previous 
    for(unsigned long i = 0; i < SIZE; ++i){
        sum += array[i];
    }

    std::cout << sum << std::endl;

    delete[] array;

    return 0;
}
