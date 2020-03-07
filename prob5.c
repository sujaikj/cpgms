#include<stdio.h>
void main()
{
float m,p,c,e,s,sum;
float a;
printf("enter the value of m,p,c,e,s\n");
scanf("%f%f%f%f%f",&m,&p,&c,&e,&s);
sum=m+p+c+e+s;
printf("sum=%f",sum);
a=(sum)/5.0;
printf("a=%f",a);
}
