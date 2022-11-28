#include "NumClass.h"
#include <stdio.h>



int main () {
    int x;
    
    x=isStrong(145);

    if(x==1)
    {
        printf("%d\n", x);
    }
    

    isArmstrong(153);

    printf("\n");

    isPalindrome(11);

    printf("\n");

    isPrime(21);
  
   return 0;
}


