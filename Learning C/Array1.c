#include <stdio.h>

int main()
{
	int numberarray[10];
	int count;
	for (count = 0; count<10 ; count++)
	{
		printf("Please enter the %d number for the array : ",count+1);
		scanf("%d",&numberarray[count]);
	}
	printf("\nThe ascending sequence of the numbers provided are:\n");
	int count1,count2,leastnumber,numberhold;
	for (count1 = 0; count1<count ;count1++)
	{
		leastnumber = numberarray[count1];
		for (count2=count1;count2<10;count2++)
		{
			if (leastnumber>numberarray[count2])
			{
				leastnumber = numberarray[count2];
			}
		}
		count2 = count2-(count1+1);
		numberhold = numberarray[count1];
		numberarray[count1] = leastnumber;
		numberarray[count2] = numberhold;
		printf("%d\n",numberarray[count1]);
	}
	return 0;
}
