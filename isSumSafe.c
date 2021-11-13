//
//  isSumSafe.c
//  
//
//  Created by milan on 04/11/2021.
//

#include <stdio.h>

int isSumSafe(int a[], int len);

int main(void){
    int a[] = {5,-2,1};
    int len = sizeof(a)/sizeof(a[0]);
    int result;
    result = isSumSafe(a,len);
    printf("\nReturn is: %d\n\n",result);
    return 0;
}


int isSumSafe(int a[], int len){
    int sum = 0;
    for (int i = 0;i<len;i++){
        sum = sum + a[i];
    }
    for (int j= 0;j<len;j++){
        if(a[j]==sum){
            return 0;
        }
    }
    return 1;
}
