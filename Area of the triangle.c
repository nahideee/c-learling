#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,s,x,y,z,A;
    printf("give the value of a=");

    scanf("%d",&a);
      printf("give the value of b=");
     scanf("%d",&b);
       printf("give the value of c=");
     scanf("%d",&c);
     s=(a+b+c)/2;
     x=s-a;
     y=s-b;
     z=s-c;

     A=sqrt(s*x*y*z);
     printf("area of the triangle A=%d",A);


     return 0;

}
