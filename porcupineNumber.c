//
//  porcupineNumber.c
//  
//
//  Created by milan on 17/10/2021.
//

#include <stdio.h>

int nextPrime(int);
int isporcupine(int);

int main(void){
    int x,result;
    printf("\n");
    printf("********************************************\n");
    printf("Enter a number to find next porcupine number\n");
    scanf("%d",&x);
        
    result  = isporcupine(x);
            
   // result = isPrime(i);
    
    printf("\nThe result is %d \t", result);
    return 0;
}

int nextPrime(int x){
    int l = x+1;
    int j;
    while(1){
        for (j = 2; j<l; j++)
            {
                if (l%j == 0)
                    break;
            }
        if (j==l)
            {
                return l;
            }
    l++;
    }
    
}

int isporcupine(int x){
    int number = x;
    int primeNum,newPrime = 0;
    while(1)
    {
    primeNum = nextPrime(number);
        newPrime = primeNum;
    if (primeNum%10 == 9)
    {
        newPrime = nextPrime(primeNum);
        if(newPrime%10==9)
        {
            return primeNum;
        }
    }
        number = newPrime;
    }
}


