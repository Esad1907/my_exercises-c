#include "difference_of_squares.h"
#include <math.h>
#include <stdio.h>


unsigned int sum_of_squares(unsigned int number) {
    
    int sumofsqrt=0;
    for(unsigned int i=1;i<=number;i++) {
        sumofsqrt=number*(number+1)*(2*number+1),
        sumofsqrt/=6;
        

    }
        
    return number=sumofsqrt;
}

unsigned int square_of_sum(unsigned int number) {
    int sqrtofsum=0;
    for(unsigned int i=1;i<=number;i++) {
        
        sqrtofsum=sqrtofsum+i;
        
    }
        number=sqrtofsum*sqrtofsum;
        return number;
        
        
} 
  
unsigned int difference_of_squares(unsigned int number) {
int diff_of_sqrt;
    diff_of_sqrt= square_of_sum(number)-sum_of_squares(number);
    printf("%d",diff_of_sqrt);
            return diff_of_sqrt;
        
}