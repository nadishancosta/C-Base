#include <stdio.h>

int main()
{
	int Array1[2][4]={{1,2,3,4},{1,2,3,4}};
	int Array2[4][3]={{1,2,3},{1,2,3},{1,2,3},{1,2,3}};
	int Array3[2][3];
	int x,y,a,b;
	for(x=0;x<2;x++)
	{
		for(y=0;y<3;y++)
		{
			b=0;
			for(a=0;a<4;a++)
			{
				b=(Array1[x][a]*Array2[a][y])+b;
			}
			Array3[x][y] = b;
		}
	}
	for(x=0;x<2;x++)
	{
		for(y=0;y<3;y++)
		{
			printf("%d  ",Array3[x][y]);
		}
		printf("\n");
	}
	return 0;
}
