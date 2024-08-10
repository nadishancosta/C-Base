#include <stdio.h>
long long int x,y;

int main()
{
	printf("Please enter the Number : ");
	scanf("%lli",&x);
	printf("Please enter the Power : ");
	scanf("%lli",&y);
	powerfunc(x,y);
	return 0;
}

int powerfunc(long long int j,long long int k)
{
	long long int l = j;
	for(--k; k>0 ;k--)
	{
		j*=l;
	}
	printf("The number %lli to the power %lli is : %lli\n",x,y,j);
	return 0;
}
