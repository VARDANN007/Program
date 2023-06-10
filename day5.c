/*Logical Operator*/
#include<stdio.h>
int main()
{
int a=20;
int b=5;

	if(a&&b)
	{
	printf("Lane 1-Condition is true\n");
	}
	if(a||b)
	{
	printf("Lane 2-Condition is true\n");
	}
//Let"s change the value of a and b
 a=0;
 b=10;
	if(a&&b)
	{
		printf("Lane 3-condition is true\n");
	}
	else
	{
		printf("Lane 3-condition is not true\n");
	}
	if(!(a&&b))
	{
		printf("Lane 4-condition is true\n");
	}

//Bitwise operator
a=10;/* 1010*/
b=6;/* 0110*/
printf("%d\n",a&b);
printf("%d\n",a|b);
printf("%d\n",a^b);
printf("%d\n",a&b && b+1 || 0 || b++);
printf("%d\n",~a);
printf("%d\n",a<<2);
printf("%d\n",a>>2);



}
