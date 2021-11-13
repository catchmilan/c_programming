//
//  nQnique.c
//  
//
//  Created by milan on 29/10/2021.
//

#include <stdio.h>

int isNUnique(int a[], int len, int n);

int main(void){
    int a[] = {};
    int n = 5, result;
    int len = sizeof(a)/sizeof(a[0]);
    result = isNUnique(a, len, 5);
    printf("The result is: %d", result);
    return 0;
}

int isNUnique(int a[], int len, int n){
    int count  = 0;
    for (int i = 0; i<len-1; i++){
        for (int j = i+1; j<len; j++){
            int sum = 0;
            sum = a[i]+ a[j];
            if(sum == n){
                count++;
            }
        }
    }
    if(count==1)
        return 1;
    else
        return 0;
}
