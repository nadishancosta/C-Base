#include <stdio.h>

int calFactorial(int *number);

int main()
{
	int x,factorial,y;
	printf("Please enter the number for the calculation of the factorial: ");
	scanf("%d",&x);
	y=x;
	factorial = calFactorial(&x);
	printf("The factorial of the number %d is: %d\n",y,factorial);
	return 0;
}

int calFactorial(int *number)
{
	int factorial;
	if (*number ==1)
	{
		return factorial;
	}
	else
	{
		*number = *number--;
		*number = *number*(calFactorial(number));//,factoria
	}	
}
