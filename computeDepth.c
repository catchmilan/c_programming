//
//  computeDepth.c
//  
//
//  Created by milan on 30/10/2021.
//

#include <stdio.h>

int computeDepth(int n);

int main(void){
    int result;
    for(int i=1;i<10;i++){
        result = computeDepth(i);
        printf("\nThe Depth is: \t %d for i: %d\n\n",result,i);
    }
    return 0;
}


int computeDepth(int n){
    int a[10]={100,100,100,100,100,100,100,100,100,100};
    int sum=0;
    int i = 0,count = 0;
    int remainder,multiply;
    while(sum!=45){
        i++;
        multiply = n*i;
        for(;multiply>0;){
            int flag = 0;
            remainder = multiply%10;
            multiply = multiply/10;
            for (int k =0;k<10;k++){
                if(a[k]==remainder){
                    flag = 1;
                    break;
                }
            }
            if (flag == 0){
                a[count]= remainder;
                count++;
            }
        }
        sum = 0;
        for(int l=0;l<10;l++){
            sum = sum+a[l];
        }
    }
    return i;
}
    
        
