#include<stdio.h>
int main()
{

    int a,b,c,d,e,f;
    printf("Enter the values of m1 m2 m3 m4 m5\n");
    scanf("%d %d %d %d %d ",&a,&b,&c,&d,&e,&f);
    f=(a+b+c+d)*100/500;
    if(f<40)
    {
      printf("you are failed");
    }
    if(f>=40&& f<50)
    {
        printf("ypu passed ");
    }
    if(f>=50&& f<60)
    {
        printf("you got a second class");  
    }
    if(f>=60&& f<70)
    {
        printf("you got a first class ");
    }
    if(f>70)
    {
        printf("<<<<<<<<<< you are the best>>>>>>>>>> ");
    }
      return 0;
}
