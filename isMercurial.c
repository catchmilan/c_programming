//
//  isMercurial.c
//  
//
//  Created by milan on 08/11/2021.
//

#include <stdio.h>

int isMercurial(int a[], int len);
int main(void){
    int a[] = {};
    int len = sizeof(a)/sizeof(a[0]);
    int result;
    result = isMercurial(a,len);
    printf("Result is: %d\n",result);
    return 0;
}

int isMercurial(int a[], int len){
    for (int i=0;i<len;i++){
        if(a[i]==1){
            for(int j=i+1;j<len;j++){
                if(a[j]==3){
                    for(int k=j+1;k<len;k++){
                        if(a[k]==1){
                        return 0;
                    }
                }
            }
        }
    }
}
return 1;
}
