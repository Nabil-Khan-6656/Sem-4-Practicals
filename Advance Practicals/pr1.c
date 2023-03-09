#include<stdio.h>
#include<conio.h>

struct library
{
    char book_title[50] , author_name[50];
    int pages , price ;
}l1;

void main(){
    printf("\n Enter Book Title : ");
    gets(l1.book_title);
    printf("\n Enter Book Author : ");
    gets(l1.author_name);
    printf("\n Enter Book price : ");
    scanf("%d", &l1.price);
    printf("\n Enter Book pages : ");
    scanf("%d", &l1.pages);


    printf("\n Book Name : %s", l1.book_title);
    printf("\n Author Name : %s", l1.author_name);
    printf("\n  Book Price : %d", l1.price);
    printf("\n Total Pages : %d", l1.pages);
    
}