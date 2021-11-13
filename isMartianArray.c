//
//  isMartianArray.c
//  
//
//  Created by milan on 09/11/2021.
//

#include <stdio.h>


int isMartianArray(int a[],int len);
int main(void){
    int a[]= {1,1,2,1,5,2,2};
    int len = sizeof(a)/sizeof(a[0]);
    int result;
    result = isMartianArray(a,len);
    printf("Return is : %d\n",result);
    return 0;
}


int isMartianArray(int a[], int len){
    int count1=0, count2=0;
    for(int i=0;i<len;i++){
        if(i<len-1){
            if(a[i]-a[i+1]==0){
                return 0;
            }
        }
        if(a[i]==1)
            count1++;
        if(a[i]==2)
            count2++;
    }
    if(count1>count2)
        return 1;
    else
        return 0;
}
