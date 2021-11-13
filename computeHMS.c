//
//  computeHMS.c
//  
//
//  Created by milan on 09/11/2021.
//

#include <stdio.h>

int * computeHMS(int seconds);

int main(void){
    int seconds = 55;
    int *result;
    result = computeHMS(seconds);
    printf("The result is: Hours: %d, Minutes: %d, Seconds: %d",*result,*(result+1),*(result+2));
    return 0;
}


int* computeHMS(int seconds){
    static int a[3];
    if(seconds>=3600){
        int x = seconds/3600;
        a[0] = x;
        seconds = seconds - x*3600;
    }
    if(seconds>=60){
        int y = seconds/60;
        a[1] = y;
        seconds = seconds - y*60;
    }
    a[2]= seconds;
    return a;
}
