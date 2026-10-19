#include "grains.h"


uint64_t square(uint8_t index) {

    double  grain=0.5;

    for(int i=1; i<=index;i++) {
        
        
        grain=2*grain;
        
        

        
    } if(index>64) {
        return 0;
    } else {
    return grain;
    }
}

uint64_t total(void) {
    uint64_t total = 0;
    for(uint8_t i=1; i<=64; i++) {
        total=total+square(i);
    }

     

    return total;
}