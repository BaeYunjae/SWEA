#include <stdio.h>

int main()
{
    int num[10];
    int i, max;

    printf("10개의 정수를 입력하시오.\n");
    for (i=0; i<10; i++)
        scanf("%d", &num[i]);
    
    max = num[0];
    for (i=1; i<10; i++)
        if (num[i] > max)
            max = num[i];

    printf("%d", max);
    return 0;
}
