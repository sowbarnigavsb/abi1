#include<stdio.h>
int main()
{
	int a,b,c=0;
	scanf("%d",&a);
while(a!=0)
{

    b=a%10;
	c++;
	a=a/10;
}
printf("count of the digit is %d",c);
return 0;
}
