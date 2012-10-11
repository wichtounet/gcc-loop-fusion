#include <iostream>

static const unsigned long SIZE = 100000000;

int main(){
    unsigned long* array = new unsigned long[SIZE];

    unsigned long sum = 0; 
    
    //This loop won't be merged    
    for(unsigned long i = 0; i < 50; ++i){
        //This loop should be merged with the following
        for(unsigned long i = 0; i < SIZE; ++i){
            array[i] = i;
        }

        //This loop should be merged with the previous 
        for(unsigned long i = 0; i < SIZE; ++i){
            sum = array[i];
        }
    }

    //This loop won't be merged    
    for(unsigned long i = 0; i < SIZE; ++i){
        array[i] = i;
    }

    std::cout << sum << std::endl;

    delete[] array;

    return 0;
}
