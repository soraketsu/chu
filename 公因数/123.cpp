#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	int b;
	int c;
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		a = a + b;
		b = a - b;
		a = a - b;
	}
	while ((c = a % b) != 0)
	{
		a = b;
		b = c;
	}
	printf("%d\n", b);	

	return 0;
}