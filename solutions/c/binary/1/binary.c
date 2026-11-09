#include "binary.h"
#include <stdio.h>
#include <math.h>
#include <string.h>


int convert(const char *input) {
   int dez=0;
   unsigned int i=0;
   
        
        
        while (strlen(input)>i) {

        if (input[strlen(input)-1-i] !='0' && input[strlen(input)-1-i] !='1') {
            return -1;
        } else {


            if(input[strlen(input)-1-i]=='1') {
            dez=dez+pow(2,i);
            
            }
            i++;
        }
    }
    return dez;
}