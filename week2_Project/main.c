#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	char name[10];
	char major[30];
	int num;
	printf("			[�������� �Է�â]\n \n \n");

	
	printf(" - �а��� �Է��ϼ��� : ");
	scanf(" %s", major);
	printf(" - �й��� �Է��ϼ��� : ");
	scanf(" %d", &num);
	printf(" - �̸��� �Է��ϼ��� : ");
	scanf(" %s", name);

	printf("\n \n \n			[���� ����] \n \n");
	printf("	[�а� : %s]\n", major);
	printf("	[�й� : %d]\n", num);
	printf("	[�̸� : %s]\n \n", name);

}