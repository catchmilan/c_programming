//
//  guthrieSequence.c
//  
//
//  Created by milan on 21/10/2021.
//

#include <stdio.h>
int isGuthrieSequence(int a[], int len);

int main(void){
    int a[] = {8,4,2,1};
    int result;
    int len = sizeof(a)/sizeof(a[0]);
    result = isGuthrieSequence(a,len);
    if (result == 1)
        printf("The array is Gutherie Sequence");
    else
        printf("The array is not Gutherie Sequence");
    return 0;
}

int isGuthrieSequence(int a[], int len){
    int nextItem=a[0];
    int i = 0;
    //int len = len;
    printf("\n length of array is: %d \n",len);
    for(int i=0;i<len-1;i++){
        if (a[i] == nextItem){
            printf( "Item are a[i] and next item is: %d \t %d\n", a[i], nextItem);
        {
            if (a[i]%2 == 0)
                {
                        nextItem = a[i]/2;
                        printf("\nNext item is %d\n",nextItem);
                }
            else
                {
                        nextItem = a[i]*3+1;
                        //printf("Next item is %d\n",nextItem);
                    
                }
        }}
        else
            break;
    }
   // printf("nextItem is %d\n",nextItem);
    if (a[len-1]==nextItem && a[len-1]==1)
        return 1;
    else
        return 0;
}
