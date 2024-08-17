#include <stdio.h>

int main()
{
	int input;
	printf("Please enter an odd number for the stars of the diagonal of the rhombus: ");
	scanf("%d",&input);
	int x,y,z;
	for(x=input;x>0;x=x-2)
	{
		for(y=x/2;y>0;y--)
		{
			printf(" ");
		}
		for(z=(input-((x/2)*2));z>0;z--)
		{
			printf("*");
		}
		printf("\n");
	}
	input = input-2;
	int a=0;
	for(x=input;x>0;x=x-2)
	{
		for(z=(input-((x/2)*2)-a);z>0;z--)
		{
			printf(" ");
		}
		for(y=x;y>0;y--)
		{
			printf("*");
		}
		printf("\n");
		a=1;
	}
	return 0;
}
