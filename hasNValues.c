//
//  hasNValues.c
//  
//
//  Created by milan on 11/11/2021.
//

#include <stdio.h>

int hasNValues(int a[], int len, int n);

int main(void){
    int a[] = {1, 2, 3, 0, 5, 6, 7, 8 ,9, 10};
    int len = sizeof(a)/sizeof(a[0]);
    int n = 10;
    int result = hasNValues(a,len,n);
    printf("Return is: %d\n",result);
    return 0;
}

int hasNValues(int a[], int len, int n){
    int temp[n];
    for (int i=0;i<n;i++)
        temp[i]=0;
    int count = 0;
    for(int i =0;i<len;i++){
        int flag = 0;
        for (int j =0; j<n;j++){
            if(a[i]==temp[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            temp[count]=a[i];
            count++;
        }
    }
    if(count != n)
        return 0;
    else
        return 1;
}
