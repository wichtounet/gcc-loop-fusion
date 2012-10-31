#include <iostream>

static const unsigned long SIZE = 20000000L;
static const unsigned long REPEAT = 10L;

static unsigned long A[SIZE];
static unsigned long B[SIZE];
static unsigned long C[SIZE];
static unsigned long D[SIZE];

int main(){
    for(unsigned long i = 0; i < SIZE; ++i){
        A[i] = i;
        B[i] = i;
        C[i] = i;
        D[i] = i;
    }

    for(int r = 0; r < REPEAT; ++r){
        for(unsigned long i = 0; i < SIZE; ++i){
            A[i] = i;
        }

        for(unsigned long i = 0; i < SIZE; ++i){
            B[i] = A[i];
        }
        
        for(unsigned long i = 0; i < SIZE; ++i){
            C[i] = B[i];
        }
        
        for(unsigned long i = 0; i < SIZE; ++i){
            D[i] = C[i];
        }
    }

    return 0;
}
