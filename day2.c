#include<stdio.h>
//constant define
/*#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'*/
/*int function();//Function Declration
int main()
{ 	
	10;
 	int g =20;
 	int i= function();//Function call
 	
 }	

int function()//Function Defination
{
 	printf("This is nothing \t but function work:\n\n");
 	return 0;
}

*/
int main()
{      const int LENGTH=10;
 	const int WIDTH=5;
 	const char NEWLINE='\n';
       int AREA=LENGTH * WIDTH;
       printf("The are in:%d",AREA);
       printf("%c",NEWLINE);
}
