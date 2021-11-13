//
//  isCentered.c
//  
//
//  Created by milan on 29/10/2021.
//

#include <stdio.h>

int isCentered(int a[], int len);

int main(void){
    int result;
    int a[]= {9,15,6};
    int len = sizeof(a)/sizeof(a[0]);
    result = isCentered(a,len);
    if(result == 1)
        printf("Return is 1");
    else
        printf("Return is 0");
    return 0;
}


int isCentered(int a[], int len){
    for(int i =0; i<len; i++){
        int sum = 0;
        for(int j = i; j<len-i; j++){
            sum = sum+a[j];
        }
        if(sum==15){
            return 1;
            break;
        }
    }
    return 0;
}


