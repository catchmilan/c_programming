//
//  isStacked.c
//  
//
//  Created by milan on 03/11/2021.
//

#include <stdio.h>

int isStacked(int n);

int main(void){
    int n = 5;
    int result;
    result = isStacked(n);
    printf("The return is: %d\n",result);
    return 0;
}


int isStacked(int n){
    int sum = 0,i=1;
    while(sum<n){
        sum = sum+i;
        printf("Sum is %d\n",sum);
        i++;
    }
    if(sum==n)
        return 1;
    else
        return 0;
}
