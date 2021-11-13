//
//  isLegalNumber.c
//  
//
//  Created by milan on 30/10/2021.
//

#include <stdio.h>

int isLegalNumber(int a[], int len, int base);

int main(void){
    
    int a[] = {4,5,7,1};
    int base = 8;
    int len = sizeof(a)/sizeof(a[0]);
    int result;
    result = isLegalNumber(a,len,base);
    printf("The return is: \t\t %d\n",result);
    return 0;
}


int isLegalNumber(int a[], int len, int base){
    int sum = 0;
    for(int i = 0;i<len;i++)
        if(a[i]>=base){
            return 0;
        }
    for(int i = 0;i<len;i++){
        int divisible = 1;
        for (int j =len-1-i; j>0; j--){
            divisible = divisible*base;
        }
        sum = sum + a[i]*divisible;
    }
    return sum;
}
