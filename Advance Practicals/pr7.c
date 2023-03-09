#include<stdio.h>
#include<conio.h>

void main(){
    int n , *p ,r = 0 , rev=0 ;
    printf("\n Enter value of n : ");
    scanf("%d", &n);

    p = &n ;
    while (*p > 0)
    {
        r = *p % 10 ;
        rev = rev *10 + r ;
        *p = *p/10 ;
    }

    printf("\n Reverse : %d", rev);
    

}