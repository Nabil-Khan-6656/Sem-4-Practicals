#include<stdio.h>
#include<conio.h>

struct calculate
{
   int x , y ;
} add = { 10 , 20} , sub ={20 , 10};

void main(){
   struct calculate mul={15 , 10} , div={10,10};
   int a ,b , c;
   float d ;
   a = add.x + add.y ;
   b = sub.x - sub.y ;
   c = mul.x * mul.y ;
   d = div.x / div.y ;
   printf("\n Addition : %d" , a);
   printf("\n Subtraction : %d" , b);
   printf("\n Multiplication : %d" , c);
   printf("\n Division : %f" , d);
    
}