#include<stdio.h>
#include<conio.h>

void main(){
    FILE *fptr ;
    char c ;
    fptr = (fopen("student.txt", "r"));
    if(fptr == NULL){
        printf("\n File not found ");
    }

    else{
        c = fgetc(fptr);
        while (c != EOF)
        {
            printf("%c", c);
            c = fgetc(fptr);
        }
        
    }

    fclose(fptr);
}