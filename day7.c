//conditional statement 
//if
#include<stdio.h>
int main()
{
int a=10;
int b=0;
if(a<20)
{
	printf("1.The value of a is less than 20:\n");
	
}
printf("1.The value of a is:%d\t\n",a);


//if else
a=30;
if(a<20)
{
	printf("2.a is less than 20\n");
}
else
{
	printf("2.a is not less than 20\n");
}
	printf("2.The value a is:%d\n",a);	

//if elseif	
a=100;
if(a==10)
{
	printf("3.The value of a is: 10\n");
}
else if(a==20)
{
	printf("3.The value of a is:20\n ");
}
else if(a==30)
{
	printf("3.The value of a is:30\n");
}
else
{
	printf("3.None of the value matching\n");
}
	printf("3.Exact value of a is: %d\n",a);

//nested if statement 
 a=100; 
 b=200;
if(a==100)
{	
	if(b==200)
		
		{	
			printf("4.The value of a %d\t and b is %d\n",a,b);
		}
	
}	
	printf("4.Exact value of a is:%d\n",a);
	printf("4.Exact value of b is:%d\n",b);

//switch 

	char grade ='B';
	switch(grade)
	{
	case 'A':	printf("Excellent!\n");
	break;
	
	case 'B':
	
	
	case 'C':	printf("Well Done!\n");
	break;
	
	case 'D':	printf("You Passed!\n");
	break;
	
	case 'F':	printf("Better Try agin!\n");
	break;
	
	default :	printf("Invalid grade!\n");
	}
	printf("Your grade id %c\n",grade);
	
//Nested switch
a=100;
b=200;
switch(a)
{	case 100:	printf("This is a part of outer switch\n",a);
			
	switch(b)
	
	case 200:	printf("This is a part of inner switch\n",a);
}
			printf("Exact value of a is: %d\n",a);
			printf("Exact value of b is: %d\n",b);				
	
	

	
}
