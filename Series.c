#include <stdio.h>

void main()
{
	int a; int d; int c; int x; int r; float e; float f; float g;
	
	printf("Enter the value of a\n");
	scanf("%d",&a);
	printf("Enter the value of d\n");
	scanf("%d",&d);
	printf("Enter the value of r\n");
	scanf("%d",&r);

	c = a+d;
	e = a^(-1);
	f = c^(-1);
	g = (c+d)^(-1);
	
	printf("The A.P. for the given value of a & d will be %d,%d,%d,....\n",a,c,c+d);
	printf("The G.P. for the given value of a & r will be %d,%d,%d,....\n",a,a*r,a*r*r);
	printf("The H.P. for the given value of a & f will be %f,%f,%f,....",e,f,g); //There is mistake in this
}
