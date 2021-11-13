//
//  perfectNumber.c
//  
//
//  Created by milan on 29/10/2021.
//

#include <stdio.h>

int henry(int i,int j);
int factorSum(int i);
int main(void){
    int result;
    result = henry(1,3);
    printf("The result is: \t%d",result);
    return 0;
}

int henry(int i, int j){
    int  count = 0;
    int  perfSum = 0;
    int  externalSum = 0;
    for (int k = 1;;k++){
            perfSum = factorSum(k);
            if (perfSum == k ){
                printf("sum of factor and k are: %d, %d\n", perfSum, k);
                count++;
                if ( count == i || count == j){
                    externalSum = externalSum + k;
                }
            }
    if(count>=j)
        break;
    }
    return externalSum;
    }


int factorSum(i){
    int sum = 0;
    for(int j = 1; j<=i/2; j++){
        if (i%j == 0)
            sum = sum + j;
    }
    return sum;
}
