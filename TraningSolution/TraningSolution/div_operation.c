#include <stdio.h> 
int main() {
	int a, b;
	float div;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	if (b == 0) {
		printf("b can't bo 0");
	}else {
		div = a / b;
		printf("%.2f", div);
	}
	system("pause");
	return 0;
}