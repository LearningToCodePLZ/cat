#include "grains.h"

uint64_t square(uint8_t index){
    // TODO: Calculate number of grains on square 'index' (1-64)
    // Return 0 if index is invalid
    if (index < 1 || index > 64) {
        return 0;  // Nevalidan index
    }
    
    uint64_t a=1;
    for(int i=1;i<index;i++){
        a=a*2;
    }
    return a;
}


uint64_t total(void){
    // TODO: Calculate total grains on all 64 squares
    uint64_t a=1;
    uint64_t suma=0;
    for(int i=1;i<=64;i++){
        suma=suma+a;
        a=a*2;
    }
    return suma;
}
