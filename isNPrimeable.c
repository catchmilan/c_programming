//
//  isNPrimeable.c
//  
//
//  Created by milan on 09/11/2021.
//

#include <stdio.h>

int isNPrimeable(int a[],int len, int n);
int main(void){
    int a[] = {3};
    int n = 2;
    int len = sizeof(a)/sizeof(a[0]);
    int result;
    result = isNPrimeable(a,len,n);
    printf("Return is : %d\n",result);
    return 0;
}

int isNPrimeable(int a[],int len, int n){
    for(int i=0;i<len;i++){
        a[i]=a[i]+n;
        for(int j=2;j<a[i];j++){
            if(a[i]%j==0){
                return 0;
            }
        }
    }
    return 1;
}
