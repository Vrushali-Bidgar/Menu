#include<stdio.h>
main()
{
	//1. display the menu
	printf("Pick an item : \n1. Pizza,Rs 239\n2. Burger,Rs 129\n3. Pasta.Rs 179\n4. French Fries, Rs 99\n5. Sandwitch,Rs 149\n");
	//2. read there choice 
	int choice=0;
	scanf("%d",&choice);
	
	//3. display based on there choice 
	
	switch(choice)
	{
		case 1:
			printf("Food Item- Pizza\n Price- 239");
			break;
		case 2:
			printf("Food Item- Burger\n Price- 129");
			break;
		case 3:
			printf("Food Item- Pasta\n Price- 179");
			break;
		case 4:
			printf("Food Item- French Fries\n Price- 99");
			break;
		case 5:
			printf("Food Item- Sandwitch\n Price- 149");
			break;
		default : printf("Invalid choice");
	}
}
