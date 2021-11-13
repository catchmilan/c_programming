//
//  is121Array.c
//  
//
//  Created by milan on 09/11/2021.
//

#include <stdio.h>
int is121Array(int a[ ], int len);
int main(void){
    int a[] = {1,1,3,1};
    int len = sizeof(a)/sizeof(a[0]);
    int result;
    result = is121Array(a,len);
    printf("Return is : %d\n",result);
    return 0;
}
int is121Array(int a[ ], int len){
    int k = 0,count1 =0,l=0,count2=0;
    for(int i=0;i<len;i++){
        if(a[i]!=1 && a[i]!=2){
            return 0;
        }
    }
    while(a[k]==1){
        count1++;
        k++;
    }
    l = count1+1;
    while(a[l]==2){
        count2++;
        l++;
    }
    int countSum = count1+count2;
    for(int j = countSum+1;j<len;j++){
        if(a[j]==1){
            count1--;
        }
    }
    if(count1==0)
        return 1;
    else
        return 0;
}
