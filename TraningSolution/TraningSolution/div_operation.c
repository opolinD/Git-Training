#include <stdio.h> 
#include<math.h>
int main() {
	int a, b;
	float div;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	if (b == 0) {
		printf("b can't bo 0");
	}else if (a == 0) {
		div = abs(a / b);
		printf("%.2f", div);

	}else {
		div = a / b;
		printf("%.2f", div);
	}
	system("pause");
	return 0;
}