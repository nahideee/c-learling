#include<stdio.h>
int main()
{
    int a,b,c,d,e,x,y;
    printf("please enter the day=");
    scanf("%d",&a);
    b=a/365;
    x=a%365;
    c=x/30;
    y=x%30;
    d=y/7;
    e=y%7;
    printf("%dyear %dmonth %dweek %dday",b,c,d,e);
    return 0;
    }
