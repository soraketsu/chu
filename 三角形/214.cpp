#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	printf("�����������ε�������\n");
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if ((a + b > c) && (a + c > b) && (b + c > a))
	{
		if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
		{
			printf("֥ʿֱ��������\n");
		}
		if ((a * a + b * b > c * c) && (a * a + c * c > b * b) && (b * b + c * c > a * a))
		{
			printf("֥ʿ���������\n");
		}
		if((a*a+b*b<c*c)||(a*a+c*c<b*b)||(b*b+c*c<a*a))
		{
			printf("֥ʿ�۽�������\n");
		}
	}
	else
	{
		printf("֥ʿѩ��");
	}
	return 0;
}