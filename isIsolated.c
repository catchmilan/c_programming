//
//  isIsolated.c
//  
//
//  Created by milan on 04/11/2021.
//

#include <stdio.h>

void isIsolated(long n);
int* cube(long n);

int main(void){
    long n=4;
    long x;
    x = n*n*n;
    isIsolated(x);
    return 0;
}

void isIsolated(long n){
    int* result;
    printf("Cube is: %ld\n",n);
    result = cube(n);
    for(int i = 0; i<10; i++){
        printf("The number is: %d \n",*(result+i));
    }
}


int* cube(long cubic){
    static int a[10];
    long x = cubic;
    long remainder ;
    int count = 0;
    while(x>0){
        remainder = x%10;
        x = x/10;
        //printf("Remainder is: %ld\n",x);
        a[count] = remainder;
        count++;
    }
    return a;
}
