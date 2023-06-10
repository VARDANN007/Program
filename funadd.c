//write code in c program where use a function for addition of two numbers and print thir value in main function
#include<stdio.h>
int add(int ,int );//Function Decleration
int main()
{ 
int a=5,b=10;

int result = add(a,b);//Function Call
printf("The addition of two number is:%d",result);
return 0;
}

int add(int a,int b)//Function Defination
{
int sum=a+b;
return(sum);
}
