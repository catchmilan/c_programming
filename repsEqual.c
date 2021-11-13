//
//  repsEqual.c
//  
//
//  Created by milan on 29/10/2021.
//

#include <stdio.h>

int repsEqual(int a[],int len, int n);

int main(void){
    int a[] = {0,3,2,0,5,3};
    int len = sizeof(a)/sizeof(a[0]);
    int n = 32053, result;
    result = repsEqual(a,len,n);
    printf("Result is %d", result);
    return 0;
}



 int repsEqual(int a[], int len,int n){
    int sum=0;
     for(int i = 0; i<len; i++){
         int divisible = 1;
         for (int j = len-i-1; j>0 ;j--){
             divisible = divisible*10;
        }
         printf("The number is i , a[i], divisible are: %d, %d , %d\n", i, a[i], divisible);
     sum = sum + a[i]*divisible;
    }
     if(sum == n)
         return 1;
     else
         return 0;
 }

