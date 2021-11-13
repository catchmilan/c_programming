//
//  sameNumberOfFactor.c
//  
//
//  Created by milan on 11/11/2021.
//

#include <stdio.h>

int sameNumberOfFactor(int n1,int n2);

int main(void){
    int n1= 23, n2= 97;
    int result;
    result = sameNumberOfFactor(n1,n2);
    printf("Return is: %d\n",result);
    return 0;
}

int sameNumberOfFactor(int n1, int n2){
    int x[2];
    int a[2]={n1,n2};
    int k = 0;
    if(n1<0 || n2<0)
        return -1;
    for (int i=0;i<2;i++){
        int count = 0;
        for (int j=1;j<=a[i];j++){
            if(a[i]%j==0){
                count++;
            }
        }
        x[k]=count;
        k++;
    }
    if(x[0]==x[1])
        return 1;
    else
        return 0;
}
