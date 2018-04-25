#include "IntBinaryOperator.h"

//上述函数使用到的辅助函数
static int half(int n) {
	return n >> 1;
}

static int odd(int n) {
	return n & 0x1;
}

int mutiply0_0(int a, int b)
{
	if (a == 1) return b;
	int result = mutiply0_0(a - 1, b) + b;
	return result;
}

int mutiply0_1(int a, int b)
{
	return a == 1 ? b : mutiply0_1(a - 1, b) + b;
}

int mutiply1_0(int a, int b)
{
	if (a == 1) return b;
	int result = mutiply1_0(half(a), b + b);
	if (odd(a)) result += b;
	return result;
}

