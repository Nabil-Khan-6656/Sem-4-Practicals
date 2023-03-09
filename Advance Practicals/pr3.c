#include<stdio.h>
#include<conio.h>


struct student
{
    int rno , marks[5];
    char name[50];
    int total ;
    float per ;
} s1[50];

void main(){
    int i , n , j ;
    printf("\n Enter no. of students : ");
    scanf("%d", &n);
    for(i=0 ; i<n ; i++){
        printf("\n Enter Student Roll no. : ");
        scanf("%d", &s1[i].rno);
        printf("\n Enter Student Name : ");
        scanf("%s", &s1[i].name);

        for(j=1 ; j<=5 ; j++){
            printf("\n Enter marks of subject %d" , j);
            scanf("%d" , &s1[i].marks[j]);
            s1[i].total = s1[i].total + s1[i].marks[j];
            s1[i].per = s1[i].total /5  ;
        }   

    }

      for(i=0 ; i<n ; i++){
        printf("\n Student roll no. : %d Student name : %s", s1[i].rno , s1[i].name);
        printf("\n________________________________________");


        for(j=1 ; j<=5 ; j++){
            printf("\n Marks of Subject %d :  %d", j , s1[i].marks[j]);
        }

        printf("\n_________________________________________");
        printf("\n Total Marks : %d Total Percentage : %f", s1[i].total , s1[i].per);
        printf("\n %d ", s1[i].marks[1]);
    }

  

}