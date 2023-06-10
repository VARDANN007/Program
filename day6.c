#include<stdio.h>
int main()
/*
{
int a=21;
int c;
	c=a;
	printf("Lane 1- = Operator Example,Value of c=:%d\n",c);
	 
	c+=a;
	printf("Lane 2- += Operator Example,Value of c=%d\n",c);
	
	c-=a;
	printf("lane 3- -=Operator Example,value of c=%d\n",c);
	
	c *=a;
	printf("Lane 4- *= Operator Example,value of c=%d\n",c);
	
	c/=a;
	printf("Lane 5 /=Operator Example,value of c=%d\n",c);
	
	c=200;
	c%=a;
	printf("Lane 6- %= Operator Example,value of c=%d\n",c);
	
	c<<=2;
	printf("Lane 7-<<= Operator Example,value of c=%d\n",c);
	
	c>>=2;
	printf("Lane 8- *= Operator Example,value of c=%d\n",c);
	
	c &=2;
	printf("Lane 9- &= Operator Example,value of c=%d\n",c);
	
	c ^=2;
	printf("Lane10 ^= Operator Example,value of c=%d\n",c);
	
	c |=2;
	printf("Lane11- |= Operator Example,value of c=%d\n",c);
}*/
{
int a=20;
int b=10;
int c=15;
int d=5;
int e;
	e=(a+b)*c/d;//(30*15)/5
	printf("(a+b)*c/d The Value is %d\n",e);
	
	e=((a+b)*c)/d;//(30*15)/5;
	printf("((a+b)*c)/d The Value is %d\n",e);
	
	
	e=(a+b)*(c/d);//
	printf("(a+b)*(c/d) The value is %d\n",e);
	
	e=a+(b*c)/d;
	printf("the output is %d",e);
	
}
	
	
