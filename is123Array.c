//
//  is123Array.c
//  
//
//  Created by milan on 09/11/2021.
//

#include <stdio.h>

int main(void){
    int a[] = {};
    int len = sizeof(a)/sizeof(a[0]);
    int count2=0,count3=0,count5=0,count=0,countSum=0;
    for(int i=0;i<len;i++){
        if(a[i]%2==0){
            count2++;
            printf("number is:%d in divided by 2\n",a[i]);
        }
        if(a[i]%3==0){
            count3++;
            printf("number is:%d in divided by 3\n",a[i]);
        }
        if(a[i]%5==0){
            count5++;
            printf("number is:%d in divided by 5\n",a[i]);
        }
        if(a[i]%2!=0 && a[i]%3!=0 && a[i]!=5){
            count++;
        }
    }
    printf("Count is:%d\n",count);
    countSum = count2+count3+count5+count;
    if(countSum==len)
        printf("Return is 1\n");
    else
        printf("Return is 0\n");
    return 0;
}
