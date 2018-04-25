#include <iostream>
#include "IntBinaryOperator.h"

using namespace std;

int main() {
	int except = mutiply0_0(19, 19);
	int actual = mutiply0_1(19, 19);
	cout << except << " " << actual << endl;
	system("pause");
	return 0;
}