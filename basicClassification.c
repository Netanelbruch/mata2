#include "NumClass.h"
#include <stdio.h>
#include <math.h>


/**
 * A strong number is the factorial sum of its digits, equal to the number itself.
 * 
*/
int isStrong(int numInt){

    int numberOriginal = numInt;
    int rem;
    int sum = 0;

    while (numInt!=0)
    {   
        rem = numInt%10;
        

        int fact = 1;
        int index = 1;
        /**
         * while loop for Factorial.
        */
        while(index <= rem)
        {
            fact = fact * index;
            index++;
        }

        sum = sum + fact;
        numInt = numInt / 10;

    }
    if (sum == numberOriginal)
    {
        printf("%d is srong number\n", numberOriginal);
        return 1;
    }
   
    printf("%d is not stron number\n", numberOriginal);
    return 0;
    
}



/**
 * the function isPrime 
 * 
 * @return 1 if number is prime,
 * alse return 0.
 *
*/
int isPrime(int numInt)
{
    /**
     * if numInt =2
     * @return 1. "true"
    */
    if(numInt==2){
        printf("%d is prime!!\n", numInt);
        return 1;
    }


/**
 * If the numInt is divisible by 2 and different from 2 then it is not prime.
 * @return 0. "false"
*/
    if(numInt%2==0){
        printf("%d is not prime!!\n", numInt);
        return 0;
    }

    /**
     * The loop ran only on the odd. 
     * because if the number was even and different from 2 then it was not prime
    */
    for (int i = 3; i < numInt; i = i+2)
    {
        if(numInt%i == 0)
        {
            printf("%d is not prime!!\n", numInt);
            return 0;
        }
      
    }
     printf("%d is prime!!\n", numInt);
    return 1;
    
}
