//
//  eval.c
//  
//
//  Created by milan on 12/11/2021.
//

#include <stdio.h>


double eval(double x, int a[], int len);

int main(void){
    int a[] = {0,1,2,3,4};
    int len = sizeof(a)/sizeof(a[0]);
    double x = 1.0;
    int result;
    result = eval(x,a,len);
    printf("Sum is: %6d\n",result);
    return 0;
    
}

double eval(double x, int a[], int len){
    int sum =0;
    for (int i=0; i<len;i++){
        int multiplier = 1;
        for(int j=0;j<i;j++){
            multiplier*=x;
        }
        sum += a[i]*multiplier;
    }
    return sum;
}
