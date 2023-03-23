#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{

	int n1, n2, n3;
	char c;

	printf("세 개의 값을 입력하시오 : ");
	scanf(" %d %d %d", &n1, &n2, &n3);
	printf("연산자를 입력하시오 : ");
	scanf("%c", &c);
	scanf("%c", &c);

	switch (c) {
	case '+':
		printf("%d + %d + %d = %d\n", n1, n2, n3, n1 + n2 + n3);
		break;

	case '-':
		printf("%d - %d - %d = %d\n", n1, n2, n3, n1 - n2 - n3);
		break;

	case '*':
		printf("%d * %d * %d = %d\n", n1, n2, n3, n1 * n2 * n3);
		break;

	case '/':
		printf("%d / %d / %d = %d\n", n1, n2, n3, n1 / n2 / n3);
		break;

	}
}