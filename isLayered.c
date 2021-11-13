//
//  isLayered.c
//  
//
//  Created by milan on 12/11/2021.
//

#include <stdio.h>

int isLayered(int a[],int len);

int main(void){
    int a[] = {1,1,2,2,3};
    int len = sizeof(a)/sizeof(a[0]);
    int result = isLayered(a,len);
    printf("Return is: %d\n",result);
    return 0;
}

int isLayered(int a[], int len){
    for(int i=0;i<len;i++){
        int count =0;
        if(i<len-1){
            if(a[i]>a[i+1]){
                return 0;
            }
        }
        for (int j=0;j<len;j++){
            if(a[i] == a[j]){
                count++;
            }
        }
        if(count<2)
            return 0;
    }
    return 1;
}
