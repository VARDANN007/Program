#include<stdio.h>
struct student{char *c;};
int main()
{
int a=10,b=20;
int c=b/a? a:b;
printf("%d\n",c);
struct student s[2];
printf("%ld",sizeof(s));
return 0; 
}
