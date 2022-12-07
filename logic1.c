/*
&& (logical and ) if both the expresssionss are true,then it returns true 

|| (logical or ) if any are of the expression is turre then it return true else false

! (logical not) if condition is true then the logical not opertor will make it flse and vice versa
*/

#include<stdio.h>
int main()
{
int a=5,b=6;
int resultone ,resulttwo;
resultone = (a<b) && (b>a);
resulttwo = (a<b) || (a>b);

printf("check the reult is %d\n",resultone);
printf("check the result is %d\n",resulttwo);

return 0;


}