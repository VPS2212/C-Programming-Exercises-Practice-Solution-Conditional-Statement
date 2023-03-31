#include<stdio.h>
#include<math.h>
int main(void)
{
	int a,b,c;
	float x1,x2;
	printf("enter the value for a:\n");
	scanf("%d",&a);
	printf("enter the value for b:\n");
	scanf("%d",&b);
	printf("enter the value for c:\n");
	scanf("%d",&c);
	x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	if(x1<=0 || x2<=0)
	{
	printf("the X1=%lf\n",x1);
	printf("the X2=%lf\n",x2);
	}
	else
	{
		printf("root are imaginary:\n");
		printf("no solution\n");
	}
	return 0;
}


