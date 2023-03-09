#include<stdio.h>
#include<conio.h>

void main(){
    int a , b , *p , *q , sum ;
    printf("\n Enter Value of a :  ");
    scanf("%d", &a);
    printf("\n Enter Value of b :  ");
    scanf("%d", &b);
    p = &a ;
    q= &b ;
    sum = *p + *q ;
    printf("\n Sum : %d", sum);

}