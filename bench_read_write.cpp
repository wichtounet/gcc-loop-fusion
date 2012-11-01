#include <iostream>

static const unsigned long SIZE = 40000000L;
static const unsigned long REPEAT = 25L;

static unsigned long A[SIZE];

int main(){
    for(unsigned long i = 0; i < SIZE; ++i){
        A[i] = i;
    }

    unsigned long sum_a = 0; 
    
    for(int r = 0; r < REPEAT; ++r){
        for(unsigned long i = 0; i < SIZE; ++i){
            sum_a = A[i];
        }

        for(unsigned long j = 0; j < SIZE; ++j){
            A[j] = j;
        }
    }

    std::cout << sum_a << std::endl;

    return 0;
}
