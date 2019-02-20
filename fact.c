#include<stdio.h>
int main()
{
int s,v;
unsigned long long fact=1;
printf("Enter the Integer");
scanf("%d",&s);
if(s<0)
{
printf("the given number is negative");
}
else
{
for(v=1;v<=1;v++)
{
fact*=v;
}
printf("factorial of %d=%llu",s,fact);
}
return 0;
}
