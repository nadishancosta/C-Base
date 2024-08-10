#include <stdio.h>

int main()
{
	int T1 = 10;
	int T2 = 20;
	int T3 = 50;
	calctriangle(T1);
	calctriangle(T2);	
	calctriangle(T3);
	return 0;
}

int calctriangle(int x)
{
	int y = 0;
	int z = x;
	for (x;x>0;x--)
	{
		y+=x;
	}
	printf("Triangular Number %d is %d\n",z,y);
	return 0;
}
