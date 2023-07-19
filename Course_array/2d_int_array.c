#include <stdio.h>

int main()
{
    int num[5][3];
    int i, j;

    for (i=0; i<5; i++) {
        printf("3개의 수를 입력하시오 --> ");
        for (j=0; j<3; j++)
            scanf("%d", &num[i][j]);
    }

    for (i=0; i<5; i++) {
        for (j=0; j<3; j++)
            printf("%d\t", num[i][j]);
        printf("\n");
    }
    return 0;
}
