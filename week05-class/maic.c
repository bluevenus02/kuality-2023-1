#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int menu(int a, int b, int c, int d, int e) {
	printf(" -------------------------------- ���Ǳ� ------------------------------- \n");
	printf("|   1	          2                 3              4              5     |\n");
	printf("| ���̴�	 �ݶ�		 ������		 ��ġ��		 ��	|\n");
	printf("| 1500��	1500��		  800��		 1500��		1000��	|\n");
	printf("|  %d ��		 %d ��		  %d ��		   %d ��		 %d ��   |\n", a, b, c, d, e);
	printf(" ----------------------------------------------------------------------- \n");
}

int caculator(int in, int price) {
	char yesno;
	if (in - price >= 0) {
		printf(" �ܵ��� %d���Դϴ�. ���ְ� �弼��!\n", (in - price));
		printf(" �� �����Ͻðڽ��ϱ�? (Y/N) >> ");
		scanf(" %c", &yesno);
		switch (yesno) {
		case 'Y':
		case 'y':
			return 1;
			break;
		case 'N':
		case'n':
			printf(" �̿����ּż� �����մϴ�. \n");
			return 0;
			break;
		default:
			printf(" �߸��� ���� �ԷµǾ����ϴ�. ���α׷��� �����մϴ�. \n");
			return 0;
		}
	}
}

int main(){
	int inserted_coins, ic2, seleted_menu, price_of_menu = 0, power = 1;
	int num_of_cider = 9, num_of_coke = 9, num_of_letsbe = 9, num_of_welch = 9, num_of_water = 9;
	int income = 0;
	char continue_yesno;
	while (power == 1) {
		menu(num_of_cider, num_of_coke, num_of_letsbe, num_of_welch, num_of_water);
		printf(" �ݾ��� �����Ͻÿ� >> ");
		scanf(" %d", &inserted_coins);
		printf(" ������ �ݾ� : %d��\n", inserted_coins);
		printf(" ������ ���� ��ȣ�� �����Ͻÿ� >> ");
		scanf(" %d", &seleted_menu);
		switch (seleted_menu) {
		case 1:
			price_of_menu = 1500;
			num_of_cider -= 1;
			break;
		case 2:
			price_of_menu = 1500;
			num_of_coke -= 1;
			break;
		case 3:
			price_of_menu = 800;
			num_of_letsbe -= 1;
			break;
		case 4:
			price_of_menu = 1500;
			num_of_welch -= 1;
			break;
		case 5:
			price_of_menu = 1000;
			num_of_water -= 1;
			break;
		default:
			printf(" �߸��� ���� �ԷµǾ����ϴ�. ���α׷��� �����մϴ�. \n");
			return 1;
		}
		if ((inserted_coins - price_of_menu) < 0) {
			printf(" ���� �����մϴ�. �� �����ðڽ��ϱ�? (Y/N) >> ");
			scanf(" %c", &continue_yesno);
			switch (continue_yesno) {
			case 'y':
			case 'Y':
				printf(" �߰� �ݾ��� �����ϼ��� >> ");
				scanf(" %d", &ic2);
				inserted_coins += ic2;
				power = caculator(inserted_coins, price_of_menu);
				break;
			case 'n':
			case 'N':
				printf(" �̿����ּż� �����մϴ�. \n");
				return 1;
			default:
				printf(" �߸��� ���� �ԷµǾ����ϴ�. ���α׷��� �����մϴ�. \n");
				return 1;
			}
		}
		else
			power = caculator(inserted_coins, price_of_menu);
	}
}