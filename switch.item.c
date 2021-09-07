#include<stdio.h>
main()
{
	printf("Pick an Food item:\n1.BURGER,Rs129\n2=FRENCH FRIES,Rs99\n3=PIZZA,Rs239\n4=PASTA,Rs179\n5=SANDWICH,Rs149");
	int ch;
	scanf("%d;&ch");
	switch(ch)
	{
		case 1:
			
			printf("Food item-BURGER\nPrice-Rs129");
			break;
		case 2:
			
			printf("Food item-FRENCH FRIES\nPrice-Rs99");
			break;
		case 3:
		
			printf("Food item-PIZZA\nPrice-Rs239");
			break;
		case 4:
			
			printf("Food item-PASTA\nPrice-Rs179");
			break;
		case 5:
			
			printf("Food item-SANDWICH\nPrice-Rs149");
			break;
		default: printf("Invalid choice!");
    }
}