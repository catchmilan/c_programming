//
//  matches.c
//  
//
//  Created by milan on 03/11/2021.
//

#include <stdio.h>

int matches(int a[], int len, int p[]);

int main(void){
    int a[]={1,3,-3,-4,-3,3,2,2,3};
    int p[]={5,2,-1,-2,4};
    int len = sizeof(a)/sizeof(a[0]);
    int result;
    result = matches(a,len,p);
    printf("The return is: %d \n",result);
    return 0;
}

int matches(int a[], int len, int p[]){
    int lenP= p[0];
    int count = 0, sum = 0;
    for(int j=1;j<lenP;j++){
        int count2 = 0;
        printf("Count is: %d\n",count);
        if(p[j]>0){
            for(int i=0;i<p[j];i++){
                if(a[count]>0){
                    count++;
                    count2++;
                }
            }
            if(p[j]!=count2){
                printf("In positive count and count2 are: %d, %d \n",count,count2);
                return 0;
            }
            else
                printf("In positive count and count2 are: %d, %d \n",count,count2);
        }
        else{
            for(int i=0;i<(-1*p[j]);i++){
                if(a[count]<0){
                    count++;
                    count2++;
                }
            }
            if((-1*p[j])!=count2){
                return 0;
                printf("In negativecount and count2 are: %d, %d \n",count,count2);
            }
            else
                printf("In negativecount and count2 are: %d, %d \n",count,count2);
        }
    }
    return 1;
}
