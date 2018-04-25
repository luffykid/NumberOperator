#pragma once
/*
描述：如下是关于整数的二元操作符的实现，对于每个运算符的实现，包含多个版本（以版本号区分），
主版本越高代表着实现的算法越为优异，子版本号越高代表着对同一主版本号下的低子版本的实现算法进行
优化，或者实现的代码风格不同（有的看起来比较简洁明了，有的则需要辅助文档帮助理解）。
*/

//整数乘法实现
int mutiply0_0(int a, int b);
int mutiply0_1(int a, int b);

int mutiply1_0(int a, int b);

//上述函数使用到的辅助函数
static int half(int n);

static int odd(int n);