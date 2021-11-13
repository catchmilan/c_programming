//
//  isPerfectSquare.c
//  
//
//  Created by milan on 17/10/2021.
//

#include "isPerfectSquare.h"

int countSquarePairs(int [], int );

int main(void){
    int a[]= {9};
    int len = sizeof(a)/sizeof(a[0]);
    int result;
    //Making element in ascending order
    for (int j = 0; j<len;j++)
    {
        for (int k = j+1; k<len; k++)
        {
        if( a[j]>a[k])
        {
            int temp = a[j];
            a[j] = a[k];
            a[k] = temp;
        }
        }
    }
    //Pass array in function
    result = countSquarePairs(a,len);
    printf("Number of pairs is: \t %d ", result);
    return 0;
}
int countSquarePairs (int a[], int len){
    if (len<2)
        return 0;
    int count  = 0;
    for (int i = 0; i<len; i++)
        for( int j = i+1; j<len;j++){
            int sum = 0;
            if (a[i]>0 && a[j]>0)
            {
            sum = a[i]+a[j];
            for (int l = 1; l<sum; l++)
                if (l*l==sum)
                    count++;
            }}
    return count;
    
}
