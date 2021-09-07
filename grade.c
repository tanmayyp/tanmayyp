#include<stdio.h>
int main()
{
int x;
printf("Enter your marks:");
scanf("%d",&x);
printf("You entered %d", x); 

	if(x>= 85 && x>=100)
	{
	printf(" You got grade A");
	}
	else if(x>=70 && x>=84)
	{
	printf("You got grade B");
	}
	else if(x>=55 && x>=69)
	{
	printf("You got grade C");
	}
	else if( x>=40 && x>=54)
	{
	printf("You got grade D");
	}
	else if( x<40)
	{
	printf("You got grade F");
	}
	return 0;
}