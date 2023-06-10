#include<stdio.h>
int main()
{
int Num;
printf("Ente the Number:\n");//Accepting Number from user
scanf("%d",&Num);

	if((Num%2) == 0)//if number remainder is equal to 0 then num is even otherwise odd
	{
		printf("Number is even\n");
	}
	else
	{
		printf("Number is odd\n");
	}
return 0;
}
