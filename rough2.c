//
//  rough2.c
//  
//
//  Created by milan on 02/11/2021.
//

#include <stdio.h>


int main(void){
    int a [10]={1,2,3,34,5,6};
    for (int i=0;i<6;i++){
        if (a[i]==2){
            printf("i am true and number is:%d\n",a[i]);
            break;
        }
        
            printf("i am false and number is:%d\n",a[i]);
        
    }
    return 0;
}
