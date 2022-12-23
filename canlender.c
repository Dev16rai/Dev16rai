#include<stdio.h>
int main()
{
int h,m,i=1,a,j,b=1;

printf("\nEnter the month number what do u want of year 2022\n\n");
scanf("%d",&m);
switch (m)
{
case 1:     /* constant-expression */
      a=7;
      j=31;   /* code */
    break;

case 2:     /* constant-expression */
      a=3;
      j=28;   /* code */
    break;
    
case 3:     /* constant-expression */
      a=3;
      j=31;   /* code */
    break;

case 4:     /* constant-expression */
      a=6;
      j=30;   /* code */
    break; 

    
case 5:     /* constant-expression */
      a=1;
      j=31;   /* code */
    break;

case 6:     /* constant-expression */
      a=4;
      j=30;   /* code */
    break;

case 7:     /* constant-expression */
      a=6;
      j=31;   /* code */
    break;

case 8:     /* constant-expression */
      a=2;
      j=31;   /* code */
    break;

case 9:     /* constant-expression */
      a=5;
      j=30;   /* code */
    break;

case 10:     
      a=7;
      j=31;   
    break;

case 11:     
      a=3;
      j=30;   
    break;

case 12:     
      a=5;
      j=31;   
    break;

default:
printf("\n Invalid now\n");
    break;
}
printf("\n\n");   
printf("\t\t\t month -%d -2022\n\n",m);
printf("         SUN      MON     TUE    WED    THU      FRI    SAT  \n\n");
switch(a)
{
case 1:     
printf("\t%d",&i);
break;

case 2:     
printf("\t\t%d",&i);
break;

case 3:     
printf("\t\t\t%d",&i);
break;

case 4:     
printf("\t\t\t\t%d",&i);
break;

case 5:     
printf("\t\t\t\t\t%d",&i);
break;

case 6:     
printf("\t\t\t\t\t\t%d",&i);
break;

case 7:     
printf("\t\t\t\t\t\t\t%d",&i);
break;

}

h=8-a;
for(i=2;i<=h;i++)

{
    printf("\t%d",&i);

}
printf("\n");
for(i=h+1;i<=j;i++)
{
    if(b==8)
    {
printf("\n");
   b=1; 
}
printf("\t%d",&i);
b++;

}
return 0;
}



