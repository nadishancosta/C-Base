#include <stdio.h>

int main()
{
	printf("Color %s, Number1 %d, Number2 %05d, hex %#x, float %5.2f, unsigned value %u.\n","red",123456,89,255,3.14159,250);
	float n1 = 1234567809.0f;
	float n2 = 1234567800.0f;
	
	float n3 = n2-n1;
	printf("The value of ns is : %5.2f\n",n3);
	return 0;
}
