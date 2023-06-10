//Arethmatic Operations
#include<stdio.h>
int main()
{
int a=21;
int b=10;
int c;
	c=a+b;
	printf("Line 1 -Value of c is:%d\n",c);
	c=a-b;
	printf("Line 2 -value of c is:%d\n",c);
	c=a*b;
	printf("Line 3 -value of c is:%d\n",c);
	c=a/b;
	printf("Line 4 -value of c is:%d\n",c);
	c=a%b;
	printf("Line 5 -value of c is:%d\n",c);
	c=a++;
	printf("Line 6 -value of c is:%d\n",c);
	c=a--;
	printf("Line 7 -value of c is:%d\n",c);
	
if(a==b)
{
	printf("Line 1 - a is equal to b:\n");
}
else
{
	printf("Line 1 - a is not equal to b:\n");
}
if(a<b)
{
	printf("Line 2 - a is lessthan b:\n");	
} 
else
{
	printf("Line 2 - a is not lessthan b:\n");
}
if(a>b)
{
	printf("Line 3 -a is greater than b:\n");
}
else
{
	printf("Line 3 - a is not greater than b:\n");
}
//Let's Change the value of a and b
a=5;
b=20;
if(a<=b)
{
	printf("lane 4 -a is less than or equal to b:\n");
}
else
{
	printf("lane 4 -a is not less than or equal to b:\n");
}
if(a>=b)
{
	printf("lane 5 -a is greater than or equal to b:\n");
}
else
{
	printf("lane 5 -a is not greate than or equal to b:\n");
}
}
