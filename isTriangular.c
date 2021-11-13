//
//  isTriangular.c
//  
//
//  Created by milan on 08/11/2021.
//

#include <stdio.h>


int main(void){
    printf("Enter a number\n");
    int x;
    scanf("%d",&x);
    int sum = 0,i=1;
    while(sum<x){
        sum += i;
        i++;
    }
    if(sum==x)
        printf("Number is triangular");
    else
        printf("Number is not triangular");
    return 0;
}
