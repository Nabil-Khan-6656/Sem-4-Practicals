#include<stdio.h>
#include<conio.h>

void main(){
    char name[50], city[50];
    FILE *fptr ;
    fptr = (fopen("student.txt", "w"));
    printf("\n Enter name : ");
    scanf("%s", &name);
    printf("\n Enter city : ");
    scanf("%s", &city);
    fprintf(fptr, "Name : %s", name);
    fprintf(fptr, "\n City : %s", city);
    fclose(fptr);

}