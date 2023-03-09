#include<stdio.h>
#include<conio.h>


struct people{
    char name[50] , city[50], address[50];
    double no , pincode ;
} p1[10];

void main(){
     int i , n ;
     printf("\n Enter no. of people : ");
     scanf("%d", &n);

     for(i=0 ; i<n ; i++){
        printf("\n Enter name of people : ");
        scanf("%s", &p1[i].name);
        printf("\n Enter name of city : ");
        scanf("%s", &p1[i].city);
        printf("\n Enter Address : ");
        scanf("%s", &p1[i].address);
        printf("\n Enter Phone no. : ");
        scanf("%lf", &p1[i].no);
        printf("\n Enter Pin code. : ");
        scanf("%lf", &p1[i].pincode);
     }


     for(i=0 ; i<n ; i++){
        printf("\n Name : %s ", p1[i].name);
        printf("\n city : %s ", p1[i].city);
        printf("\n Phone no. : %lf ", (p1[i].no));
        printf("\n Pincode : %lf ", ( p1[i].pincode));
        printf("\n_______________________________");
     }
}