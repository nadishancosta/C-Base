#include <stdio.h>

int main()
{
	char tank;
	printf("\nMenu of Colors: \nOrange\nBrown\nYellow\nGreen\n\n");
	printf("Please choose the first letter of the color of the gas tank: ");
	scanf("%c",&tank);
	if (tank == 'O' || tank == 'o'){
		printf("The contents of the tank is Ammonia\n");
	}
	else if (tank == 'B' || tank == 'b'){
		printf("The contents of the tank is Carbon Monoxide\n");
	}
	else if (tank == 'Y' || tank == 'y'){
		printf("The contents of the tank is Hydrogen\n");
	}
	else if (tank == 'G' || tank == 'g'){
		printf("The contents of the tanks is Oxygen\n");
	}
	else{
		printf("The character you have entered is invalid!\n");
	}
	printf("\nGlad to Be of Service to you!\n\n");
	return 0;
}
