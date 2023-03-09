#include<stdio.h>
#include<conio.h>

void main(){
    FILE *fptr1 , *fptr2, *fptr3;
    char c ;
    fptr1 = fopen("student.txt", "r");
    fptr2 = fopen("student1.txt", "r");
    fptr3 = fopen("merged.txt", "w");


    while ((c = fgetc(fptr1)) != EOF)
    {
         fputc(c , fptr3);
    }

    while ((c = fgetc(fptr2)) != EOF)
    {
         fputc(c , fptr3);
    }

    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);
    

}