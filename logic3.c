#include<stdio.h>
int main()
{
int age;
printf("enter your age  : ");
scanf("%d",&age);

if(age>=18)
{
printf("your an adult now ");
}else{
    printf("go back now ");
}
return 0;
}