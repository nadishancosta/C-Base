#include <stdio.h>

int main()
{
	int Array[4][3]={{151,2,3},{4,5,6},{7,8,9},{10,11,12}};
	int x,y;
	for (x=0;x<4;x++)
	{
		for(y=0;y<3;y++)
		{
			printf("%d ",Array[x][y]);
		}
		printf("\n");
	}
	return 0;
}
