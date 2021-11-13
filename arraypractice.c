//
//  arraypractice.c
//  
//
//  Created by milan on 28/10/2021.
//

#include "arraypractice.h"

//Looks like there is no solution for this problem.,
int* solve10();
int fact(int);
int main(){
    int* result= solve10();
    printf("First number X is: %d and Second number Y is: %d ",*result, (*result+4));
    return 0;
}
int* solve10(){
    static int a[2];
    int sumRight= fact(10);
    int sumLeft = 0;
    int i,j;
    int flag = 0;
    while(1){
        for (int i=1;i<10;i++){
            for (int j=1;j<10;j++)
            {
                sumLeft = fact(i)+fact(j);
               // printf("sumLeft and sumRight are: %d and %d",sumLeft,sumRight);
                if (sumLeft == sumRight)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag==1)
                break;
        } //break;
    }
    printf("sumLeft and sumRight are: %d and %d",i,j);
  
            a[0] = i;
            a[1] = j;
            return a;
    
   // return 0;
}

int fact(int x){
    int sum = x;
    if(x>1)
        sum = sum*fact(x-1);
    return sum;
}
