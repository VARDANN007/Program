//Hello World Program 
#include<stdio.h>
#include<float.h>
//Variable Defination

extern int a,b;
extern int c;
extern float f;
int main()
{
/*My first program in c*/
 	printf("Hello World!\n");
 	


//Sizeof() Function How it is work
{
	printf("The Storage Size of integer is: %d", sizeof(int));
}
{
 	printf("The Sorage value of float is:%d\n",sizeof(float));
 	printf("the size of minimum float is:%E\n",FLT_MIN);
 	printf("The size of maximum float is:%E\n",FLT_MAX);
 	printf("Precision value:%d\n",FLT_DIG);		 
}
//Variable Decleration How ot works
//Variable Defination
{
int a,b;
int c;
float f;
//Actuall Initilization
a=10;
b=20;
c=a+b;
printf("The value of c is:%d\n",c);
f=70.0/3.0;
printf("The value of f is:%f",f);
}
}
