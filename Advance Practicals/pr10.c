#include<stdio.h>
#include<conio.h>


float calculate( float p , float r , float t , float *si){
    *si = (p * r * t) / 100.0;
}
void main(){
    float principal , rate , time , si ;
    printf("\n Enter principal amount : ");
    scanf("%f", &principal);
    printf("\n Enter rate of interest : ");
    scanf("%f", &rate);
    printf("\n Enter Time period : ");
    scanf("%f", &time);
    calculate(principal, rate , time, &si);
    printf("\n Simple Interest = Rs. %.2f\n", si);
}