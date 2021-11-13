//
//  updateMileageCounter.c
//  
//
//  Created by milan on 12/11/2021.
//

#include <stdio.h>

void updateMileageCounter(int a[], int miles, int len);

int main(void){
    int a[]= {8,9,9,5,0};
    int miles = 2;
    int len = sizeof(a)/sizeof(a[0]);
    updateMileageCounter(a,miles,len);
    return 0;
}

void updateMileageCounter(int a[], int miles, int len){
    int sum =0, carry =0;
    int adder,n;
    if(miles>=10){
        adder = miles%10;
        n = miles/10;
    }
    else
        adder = miles;
    for (int i=0; i<len; i++){
        sum = a[i]+adder+carry;
        if(sum>=10){
            a[i]=sum%10;
            carry=sum/10;
        }
        else{
            a[i]=sum;
            carry =0;
        }
        adder = n%10;
        n = n/10;
    }
    for(int j=0;j<len;j++)
        printf("%d",a[j]);
}
