#include <iostream>

#define SIZE 100000000L

/*
 * Test to verify the fusion of more than two loops
 * 
 * Currently, only two loops are fused, because the distance between the next ones is too high,
 * some more cleaning will be necessary before it can be merged again.
 */

int main(){
    unsigned long* array_1 = new unsigned long[SIZE];
    unsigned long* array_2 = new unsigned long[SIZE];
    unsigned long* array_3 = new unsigned long[SIZE];
    
    //This loop won't be merged    
    //for(unsigned long j = 0; j < 50; ++j){
        for(unsigned long i = 0; i < SIZE; ++i){
            array_1[i] = i;
        }

        for(unsigned long i = 0; i < SIZE; ++i){
            array_2[i] = array_1[i];
        }
        
        for(unsigned long i = 0; i < SIZE; ++i){
            array_3[i] = array_1[i];
        }
    //}

    delete[] array_1;
    delete[] array_2;
    delete[] array_3;

    return 0;
}
