#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int menu(int a, int b, int c, int d, int e) {
	printf(" -------------------------------- 자판기 ------------------------------- \n");
	printf("|   1	          2                 3              4              5     |\n");
	printf("| 사이다	 콜라		 레쓰비		 웰치스		 물	|\n");
	printf("| 1500원	1500원		  800원		 1500원		1000원	|\n");
	printf("|  %d 개		 %d 개		  %d 개		   %d 개		 %d 개   |\n", a, b, c, d, e);
	printf(" ----------------------------------------------------------------------- \n");
}

int caculator(int in, int price) {
	char yesno;
	if (in - price >= 0) {
		printf(" 잔돈은 %d원입니다. 맛있게 드세요!\n", (in - price));
		printf(" 더 구매하시겠습니까? (Y/N) >> ");
		scanf(" %c", &yesno);
		switch (yesno) {
		case 'Y':
		case 'y':
			return 1;
			break;
		case 'N':
		case'n':
			printf(" 이용해주셔서 감사합니다. \n");
			return 0;
			break;
		default:
			printf(" 잘못된 값이 입력되었습니다. 프로그램을 종료합니다. \n");
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
		printf(" 금액을 투입하시오 >> ");
		scanf(" %d", &inserted_coins);
		printf(" 투입한 금액 : %d원\n", inserted_coins);
		printf(" 구매할 음료 번호를 선택하시오 >> ");
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
			printf(" 잘못된 값이 입력되었습니다. 프로그램을 종료합니다. \n");
			return 1;
		}
		if ((inserted_coins - price_of_menu) < 0) {
			printf(" 돈이 부족합니다. 더 넣으시겠습니까? (Y/N) >> ");
			scanf(" %c", &continue_yesno);
			switch (continue_yesno) {
			case 'y':
			case 'Y':
				printf(" 추가 금액을 투입하세요 >> ");
				scanf(" %d", &ic2);
				inserted_coins += ic2;
				power = caculator(inserted_coins, price_of_menu);
				break;
			case 'n':
			case 'N':
				printf(" 이용해주셔서 감사합니다. \n");
				return 1;
			default:
				printf(" 잘못된 값이 입력되었습니다. 프로그램을 종료합니다. \n");
				return 1;
			}
		}
		else
			power = caculator(inserted_coins, price_of_menu);
	}
}