#include "lowCase.h"

int lowCase(char c) {
     
     c = (int)c;
 
     if (c >= 65 && c <= 90){

        c = c + 32;   
     }
     return 0;  
       
}

