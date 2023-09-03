#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	printf("请输入三角形的三条边\n");
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if ((a + b > c) && (a + c > b) && (b + c > a))
	{
		if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
		{
			printf("芝士直角三角形\n");
		}
		if ((a * a + b * b > c * c) && (a * a + c * c > b * b) && (b * b + c * c > a * a))
		{
			printf("芝士锐角三角形\n");
		}
		if((a*a+b*b<c*c)||(a*a+c*c<b*b)||(b*b+c*c<a*a))
		{
			printf("芝士钝角三角形\n");
		}
	}
	else
	{
		printf("芝士雪豹");
	}
	return 0;
}