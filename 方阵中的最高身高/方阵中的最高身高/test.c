#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//这里有两个思路，可以把数据先存入数组，然后假设第一个元素最大，再一一比对，直到找到最大的数的坐标
//也可以不存入数组，身高不可能为负数，所以假设max为0，与每个数比对，碰到比max大的就使max更新
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