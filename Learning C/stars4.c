#include <stdio.h>

int main()
{
        int inputnum;
        printf("Please enter the number of stars: ");
        scanf("%d",&inputnum);
        int x=0,y,z;
        for(x=inputnum;x>0;x--)
        {
                for(y=0;y<x;y++)
                {
                        printf("*");
                }
                for(z=x-y;z>0;z--)
                {
                        printf(" ");
                }
                printf("\n");	
        }
        return 0;
}
