#include<stdio.h>
#include<conio.h>

void main(){
     int *a[50], b[50], n , i , sum=0 , esum=0 , osum=0 ;
     printf("\n Enter value of n : ");
     scanf("%d", &n);
     for ( i = 0; i < n; i++)
     {
        printf("\n Enter element  %d : ",i );
        scanf("%d", &b[i]);
        a[i] = &b[i];
        if(*a[i] % 2 == 0){
            esum = esum + *a[i];
        }

        else{
            osum = osum + *a[i];
        }
     }

     for ( i = 0; i < n; i++)
     {
        printf("\n Element at %d index is : %d", i , *a[i]);

     }

     printf("\n Even Sum : %d", esum);
     printf("\n Odd Sum : %d", osum);
     
     
}