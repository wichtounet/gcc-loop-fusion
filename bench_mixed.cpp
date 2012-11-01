#include <iostream>

static const unsigned long SIZE = 20000000L;
static const unsigned long REPEAT = 25L;

static unsigned long A[SIZE];
static unsigned long B[SIZE];
static unsigned long C[SIZE];

int main(){
    for(unsigned long i = 0; i < SIZE; ++i){
        A[i] = i;
        B[i] = i;
        C[i] = i;
    }

    unsigned long P = 99;
    
    for(int r = 0; r < REPEAT; ++r){
        for(unsigned long i = 0; i < SIZE - 1; ++i){
            A[i] = B[i] * P;
        }

        for(unsigned long j = 0; j < SIZE - 1; ++j){
            C[j] = A[j] * B[j+1];
        }
    }

    return 0;
}
