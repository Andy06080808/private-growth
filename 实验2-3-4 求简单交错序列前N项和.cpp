/*本题要求编写程序,计算序列 1 - 1/4 + 1/7 - 1/10 + ... 的前N项之和。

输入格式:
输入在一行中给出一个正整数N。

输出格式:
在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后三位。题目保证计算结果不超过双精度范围。

输入样例:
10
输出样例:
sum = 0.819*/
#include<stdio.h>
int main()
{
	double sum = 0;
	int i,n;
	int sign = 1;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i += 3)
	{
		sum += sign * (1.0 / i);
		sign = -sign;
	}
	printf("sum=%.3f\n", sum);
	return 0;
}