#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{

	int n1, n2, n3;
	char c;

	printf("�� ���� ���� �Է��Ͻÿ� : ");
	scanf(" %d %d %d", &n1, &n2, &n3);
	printf("�����ڸ� �Է��Ͻÿ� : ");
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