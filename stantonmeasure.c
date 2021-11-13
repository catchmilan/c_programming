//
//  stantonmeasure.c
//  
//
//  Created by milan on 22/10/2021.
//

#include <stdio.h>
int stantonMeasure(int a[], int len);

int main(void){
    
    int a[] = {2,3,4,1,1};
    int len = sizeof(a)/sizeof(a[0]);
    int result;
    
    result = stantonMeasure(a,len);
    printf("Return value is:\t %d",result);
    return 0;
}

int stantonMeasure(int a[], int len){
    int count1 = 0;
    int count2 = 0;
    for (int i= 0; i<len; i++){
        if(a[i]==1)
            count1++;
    }
    for (int i=0; i<len; i++){
        if(a[i]==count1)
            count2++;
    }
    return count2;
}
