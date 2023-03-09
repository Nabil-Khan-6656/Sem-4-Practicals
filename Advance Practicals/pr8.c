#include<stdio.h>
#include<conio.h>

void main(){
    int *a[50], b[50], n , i , j , step , temp ;
    printf("\n Enter value of n : ");
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        printf("\n Enter element %d ", i);
        scanf("%d", &b[i]);
        a[i] = &b[i];
    }

    for ( i = n-1; i >=0 ; i--)
    {
        printf("\n Element at %d index is  : %d",i ,  *a[i]);
    }
    

    //   int n;
    // printf("Enter the number of elements in the array: ");
    // scanf("%d", &n);

    // int arr[n];
    // int *ptr;

    // printf("Enter the elements of the array:\n");
    // for (ptr = arr; ptr < arr + n; ptr++) {
    //     scanf("%d", ptr);
    // }

    // printf("The elements of the array in reverse order are:\n");
    // for (ptr = arr + n - 1; ptr >= arr; ptr--) {
    //     printf("%d ", *ptr);
    // }

}





