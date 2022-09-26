#include <stdio.h> 
#include<math.h>
int main() {
	int a, b;
	float div;
	pritnf("Input a and b: ")
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	if (b == 0) {
		printf("b can't bo 0");
	}else if (a == 0) {
		div = abs(a / b);
		printf("Result of division: %.2f", div);

	}else {
		div = a / b;
		printf("Result of division: %.2f", div);
	}
	system("pause");
	return 0;
}