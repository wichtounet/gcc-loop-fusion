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

    for(int r = 0; r < REPEAT; ++r){
        for(unsigned long i = 0; i < SIZE; ++i){
            A[i] = B[i] + C[i];
        }

        for(unsigned long j = 0; j < SIZE; ++j){
            B[j] = A[j] + C[j];
        }
    }

    return 0;
}
