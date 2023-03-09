#include<stdio.h>
#include<conio.h>

struct student {
    int no , m1 , m2 , m3 ;
    char name[50];
}s1;

void print (struct student s1);
void main(){
    print(s1);
}


void print (struct student s1){
   printf("\n Enter Student Roll no. : ");
   scanf("%d", &s1.no);
   printf("\n Enter Student name : ");
   scanf("%s", &s1.name);
    printf("\n Enter marks of sub1. : ");
   scanf("%d", &s1.m1);   
    printf("\n Enter marks of sub2. : ");
   scanf("%d", &s1.m2);   
    printf("\n Enter marks of sub3. : ");
   scanf("%d", &s1.m3);   
   int total ;
   float per ;
    total = s1.m1 + s1.m2 + s1.m3 ;
    per = total/3;
    printf("\n Student no. : %d  Student Name : %s", s1.no, s1.name);
    printf("\n__________________________________");
    printf("\n Marks of sub1 : %d", s1.m1);
    printf("\n Marks of sub2 : %d", s1.m2);
    printf("\n Marks of sub3 : %d", s1.m3);
    printf("\n__________________________________");
    printf("\n Total Marks : %d Percantage : %0.02f",total , per);
}