#include <stdio.h>

int main()
{
    int score;
    scanf("%d", &score);

    if (score > 100) goto error;
    if (score < 0) goto error;
    switch(score/10)
    {
        case 10:
        case 9:
            printf("A 학점\n");
            break;
        case 8:
            printf("B 학점\n");
            break;
        case 7:
            printf("C 학점\n");
            break;
        case 6:
            printf("D 학점\n");
            break;
        default:
            printf("F 학점\n");
            break;
    }
    return 0;
    error:
        printf("점수 유효범위 오류\n");
        return 1;
}
