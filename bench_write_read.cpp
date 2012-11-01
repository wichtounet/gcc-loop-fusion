#include <iostream>

static const unsigned long SIZE = 20000000L;
static const unsigned long REPEAT = 25L;

static unsigned long A[SIZE];

int main(){
    unsigned long sum_a = 0; 
    
    for(int r = 0; r < REPEAT; ++r){
        for(unsigned long i = 0; i < SIZE; ++i){
            A[i] = i;
        }

        for(unsigned long j = 0; j < SIZE; ++j){
            sum_a += A[j];
        }
    }

    std::cout << sum_a << std::endl;

    return 0;
}
