#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
    double num_of_sub = 0;
    double sum_of_score = 0;
    int i;

    printf("학점을 계산할 과목 수 입력 >> ");
    scanf(" %lf", &num_of_sub);

    char score;

    for (i = 0; i < num_of_sub; i++) {
        printf("%d번째 과목 성적 입력 >> ", i + 1);
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
            printf("잘못된 값이 입력되었습니다. 다시 입력해주세요.\n");
            return 1;
        }
    }
    double avg_of_grade = sum_of_score / num_of_sub;
    printf("\n평균 학점 : %.2f\n", avg_of_grade);
}