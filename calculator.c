#include<stdio.h>
int main()
{
 float num1;
 char op;
 float num2;
 float result;

 printf("enter the first number  ");
 scanf("%f",&num1);

 printf("enter the opertion  ");
 scanf(" %c",&op);

 printf("enter the second number  ");
 scanf("%f",&num2);
 
 switch (op)
 {
 case '+': 
  
  (result=num1+num2);
  printf("%f",result);
  break;

 case '-':
(result=num1-num2);
 printf("%f",result);
 break;

 
 case '*': 
  
  (result=num1*num2);
  printf("%f",result);
  break;

 case '/':
(result=num1/num2);
 printf("%f",result);
 break;

   default  :
 printf("the opertion is not valid");  
 
 return 0;
 }







}