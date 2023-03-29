#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


name();
printer(int a, int b);


int main()
{
	name();
	int a, b;
	printf("Input two integer : ");
	scanf(" %d %d", &a, &b);
	printer(a, b);

}

name() {
	printf("------ 이 프로그램은 사칙 연산 출력기입니다. ------\n");
}

printer(int a, int b)
{
	printf("%d + %d = %d\n", a, b, a+b);
	printf("%d - %d = %d\n", a, b, a-b);
	printf("%d * %d = %d\n", a, b, a*b);
	printf("%d / %d = %d\n", a, b, a/b);
}