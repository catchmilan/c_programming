//
//  isInertial.c
//  
//
//  Created by milan on 12/10/2021.
//

#include "isInertial.h"
int isInertial (int a[], int len);
int main(void){
    int a[] = {2,12,12,4,6,8,11};
    int x;
    x = isInertial(a,6);
    if(x==1)
        printf("Array is inertial");
    else
        printf("Array is not inertial");
    return 0;
}
int isInertial(int a[], int len){
    int flag = 0;
 // does array contains at least one odd value
    for (int i = 0;i<len;i++)
        if (a[i]%2 == 0)
            flag = 0;
        else
        {
            flag = 1;
            break;
        }
    if (flag == 0)
        return 0;

// is even number is maximum
    for (int j = 0; j<len; j++)
    {
        for (int k = j+1; k<len; k++)
            if(a[j]<a[k])
            {
                int temp = a[k];
                a[k] = a[j];
                a[j] = temp;
            }
    }
    
 //   for (int x = 0;x<len;x++)
//      printf("the order is %d \n",a[x]);
    
    if (a[0]%2 != 0)
        return 0;
 // is every odd value is greater than every even value except maximum even value
    for (int l = 1; l<len ; l++)
    if(a[0]!=a[l])
    {
        if( a[l]%2 == 1)
                {
                    for (int k = 1; k<len;k++)
                        if (a[k]>a[l] && a[k]%2==0)
                            return 0;
                }
    }
            return 1;
}

