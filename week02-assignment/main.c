#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	char name[10];
	char major[30];
	int num;
	printf("			[개인정보 입력창]\n \n \n");

	
	printf(" - 학과를 입력하세요 : ");
	scanf(" %s", major);
	printf(" - 학번을 입력하세요 : ");
	scanf(" %d", &num);
	printf(" - 이름을 입력하세요 : ");
	scanf(" %s", name);

	printf("\n \n \n			[나의 정보] \n \n");
	printf("	[학과 : %s]\n", major);
	printf("	[학번 : %d]\n", num);
	printf("	[이름 : %s]\n \n", name);

}