//
//  rough.c
//  
//
//  Created by milan on 07/11/2021.
//

#include <stdio.h>

int a2(int[] a);
int main(void){
    int a[]  = {2,3,4,1,3};
    int result = a2(a);
    printf("The result is: %d\n",result);
    return 0;
}


int a2(int[] a) {
int sumEven = 0; int sumOdd = 0;
for (int i=0; i<a.length; i++) {
if (a[i]%2 == 0)
    sumEven += a[i];
else
    sumOdd += a[i];
}
return sumOdd - sumEven;
}
