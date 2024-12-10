/*本题目要求计算下列分段函数f(x)的值：
输入格式：
输入在一行中给出实数x。
输出格式：
在一行中按“f(x) = result”的格式输出，其中x与result都保留一位小数。
输入样例1：
10
输出样例1：
f(10.0) = 0.1
输入样例2：
234
输出样例2：
f(234.0) = 234.0
#include<stdio.h>
int main()
{
	double x;
	scanf_s("%lf",&x);
	if (x == 10)
	{
		double result;
		result = 1.0 / x;
		printf("f(%.1lf)=%.1lf\n", x,result);
	}
	else
	{
		printf("f(%.1f)=%.1f\n", x, x);
	}
	return 0;
}
本题要求编写程序，计算2个正整数的和、差、积、商并输出。题目保证输入和输出全部在整型范围内。

输入格式:
输入在一行中给出2个正整数A和B。

输出格式:
在4行中按照格式“A 运算符 B = 结果”顺序输出和、差、积、商。

输入样例:
3 2
输出样例:
3 + 2 = 5
3 - 2 = 1
3 * 2 = 6
3 / 2 = 1
#include<stdio.h>
int main()
{
	int x, y;
	scanf_s("%d %d", &x, &y);
	printf("%d+%d=%d\n", x, y, x + y);
	printf("%d-%d=%d\n", x, y, x - y);
	printf("%d*%d=%d\n", x, y, x * y);
	printf("%d/%d=%d\n", x, y, x / y);
	return 0;
}
为了提倡居民节约用电，某省电力公司执行“阶梯电价”，安装一户一表的居民用户电价分为两个“阶梯”：
月用电量50千瓦时（含50千瓦时）以内的，电价为0.53元/千瓦时；超过50千瓦时的，超出部分的用电量，电价上调0.05元/千瓦时。
请编写程序计算电费。

输入格式:
输入在一行中给出某用户的月用电量（单位：千瓦时）。

输出格式:
在一行中输出该用户应支付的电费（元），结果保留两位小数，格式如：“cost = 应付电费值”；
若用电量小于0，则输出"Invalid Value!"。

输入样例1:
10
输出样例1:
cost = 5.30
输入样例2:
100
输出样例2:
cost = 55.50
#include<stdio.h>
int main()
{
	int e;
	double cost1,cost2;
	scanf_s("%d", &e);
	if (e <= 50)
	{
		cost1 = e * 0.53;
		printf("cost=%.2lf\n", cost1);
	}
	else if (e > 50)
	{
		cost1 = 50 * 0.53;
		cost2 = (e - 50) * 0.58;
		printf("cost=%.2lf", cost1 + cost2);
	}
	else
	{
		printf("Invalid Value!");
	}
	return 0;
}
本题要求根据火车的出发时间和达到时间，编写程序计算整个旅途所用的时间。

输入格式：
输入在一行中给出2个4位正整数，其间以空格分隔，分别表示火车的出发时间和到达时间。
每个时间的格式为2位小时数（00-23）和2位分钟数（00-59），假设出发和到达在同一天内。

输出格式：
在一行输出该旅途所用的时间，格式为“hh:mm”，其中hh为2位小时数、mm为2位分钟数。

输入样例：
1201 1530
输出样例：
03:29
#include<stdio.h>
int main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	int hh1, hh2, mm1, mm2,h,m;
	hh1 = a / 100;
	hh2 = b / 100;
	mm1 = a % 100;
	mm2 = b % 100;
	if (mm1 < mm2)
	{
		h = hh2 - hh1;
		m = mm2 - mm1;
		if (h < 10) {
			printf("0%d:%d\n", h, m);
		}
		else
		{
			printf("%d:%d\n", h, m);
		}
	}
	else
	{
		h = hh2 - hh1 - 1;
		m = mm2+60-mm1;
		if (h < 10) {
			printf("0%d:%d\n", h, m);
		}
		else
		{
			printf("%d:%d\n", h, m);
		}
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int i;
	int sum = 0;
	for (i = 1; i <= 100; i++) {
		sum += i;
	}
	printf("%d\n", sum);
	return 0;
}*/
