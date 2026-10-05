#include <stdio.h>

int main() {
	int a, b;
	printf("Enter a and b: ");
	scanf("%d %d", &a, &b);

	int c = ((~a) & b) | ((~b) & a);

	printf(" the Value is %d\n", c);
	return 0;
}
