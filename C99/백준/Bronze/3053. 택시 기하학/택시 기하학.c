#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>
int main(void)
{
	double r;
	scanf("%lf", &r);

	printf("%lf\n", pow(r, 2)*M_PI);
	printf("%lf", pow(r, 2) + pow(r, 2));


}