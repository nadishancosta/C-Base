#include <stdio.h>

int main()
{
        char tank;
        printf("\nMenu of Colors: \nOrange\nBrown\nYellow\nGreen\n\n");
        printf("Please choose the first letter of the color of the gas tank: ");
        scanf("%c",&tank);
        switch (tank){
	case 'O':
		printf("The contents of the tank is Ammonia\n");
		break;
	case 'B':
                printf("The contents of the tank is Carbon Monoxide\n");
		break;
	case 'Y':
                printf("The contents of the tank is Hydrogen\n");
		break;
	case 'G':
                printf("The contents of the tanks is Oxygen\n");
		break;
	case 'o':
                printf("The contents of the tank is Ammonia\n");
                break;
        case 'b':
                printf("The contents of the tank is Carbon Monoxide\n");
                break;
        case 'y':
                printf("The contents of the tank is Hydrogen\n");
                break;
        case 'g':
                printf("The contents of the tanks is Oxygen\n");
                break;
	default:
                printf("The character you have entered is invalid!\n");
		break;
	}
        printf("\nGlad to Be of Service to you!\n\n");
        return 0;
}

