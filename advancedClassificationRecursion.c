#include "NumClass.h"
#include <stdio.h>




int subtractingNumber(int num)
{
    int temp = num;
    int siz = 0;
    
    /**
     * loop for know the length of num.
    */
    for (int i = 0; temp != 0; i++)
    {
            temp = temp/10;
            siz ++;
    }


    int arr[siz];
    for (int i = 0; num != 0; i++)
    {

        arr[i] = num%10;
        num = num/10;
        
    }
   
   
    if (arr[0] != arr[(siz-1)])
    {
        printf(" is not palindrom\n");
        return -1;
    }


    int numreturn = 0;
    for (int i = 1; i < siz-1; i++)
    {
        numreturn += arr[i];
        if(i == siz-2)
        {
            return numreturn;
        }
        numreturn = numreturn*10;
        
    }

    return numreturn;

} 

int testArmstrongNumber(int num)
{
     if(num>0)
     {

        int pow3 = (num%10)*(num%10)*(num%10);
        return (pow3+ testArmstrongNumber(num/10));
     }
    return num;
}


int isArmstrong(int num)
{
    int temp = testArmstrongNumber(num);

    if(temp == num)
    {
        printf("%d It is an Armstrong Number\n", num);
        return 1;
    }
    else
    {
        printf("%d It is not an Armstrong Number\n", num);
        return 0;
    }
    
}
    



int isPalindrome(int num)
{
    int secNum = subtractingNumber(num);

    if (secNum == 0)
    {
        printf("is palindrome\n");
        return 1 ;
    }

    if (secNum == -1)
    {
        printf("is not palindrome\n");
        return 0 ;
    }

    isPalindrome(secNum);
    

    return 1;
}



