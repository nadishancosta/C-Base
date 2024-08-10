#include <stdio.h>

int main()
{
	int number,count;
	float remainder;
	printf("Please enter the number: ");
	scanf("%d",&number);
	remainder = number;
	for (count= 1;count > 0;){
		remainder = remainder/10;
		if (remainder >= 1){
			count +=1;
		}
		else if (remainder < 1){
			break;
		}
	}
	return 0;
	int countarray[count];
	int counter =count,wholenum;
	for (counter;counter>0;counter--){
		wholenum = number/(10^(counter-1));
		countarray[count-counter]= wholenum;
		
	}
	
	
}
