#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
    double num_of_sub = 0;
    double sum_of_score = 0;
    int i;

    printf("������ ����� ���� �� �Է� >> ");
    scanf(" %lf", &num_of_sub);

    char score;

    for (i = 0; i < num_of_sub; i++) {
        printf("%d��° ���� ���� �Է� >> ", i + 1);
        scanf(" %c", &score);
        switch (score) {
        case 'A':
            sum_of_score += 4;
            break;
        case 'B':
            sum_of_score += 3;
            break;
        case 'C':
            sum_of_score += 2;
            break;
        case 'D':
            sum_of_score += 1;
            break;
        case 'F':
            sum_of_score += 0;
            break;
        default:
            printf("�߸��� ���� �ԷµǾ����ϴ�. �ٽ� �Է����ּ���.\n");
            return 1;
        }
    }
    double avg_of_grade = sum_of_score / num_of_sub;
    printf("\n��� ���� : %.2f\n", avg_of_grade);
}