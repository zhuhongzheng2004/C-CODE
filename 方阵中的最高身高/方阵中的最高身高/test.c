#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//����������˼·�����԰������ȴ������飬Ȼ������һ��Ԫ�������һһ�ȶԣ�ֱ���ҵ�������������
//Ҳ���Բ��������飬��߲�����Ϊ���������Լ���maxΪ0����ÿ�����ȶԣ�������max��ľ�ʹmax����
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int i = 0;
	int j = 0;
	int num = 0;
	int max = 0;
	int x = 0;
	int y = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &num);
			if (num > max)
			{
				max = num;
				x = i+1;
				y = j + 1;
			}

		}
	}
	printf("%d %d\n", x, y);
	return 0;
}