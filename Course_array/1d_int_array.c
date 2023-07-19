#include <stdio.h>

int main()
{
    int num[10];
    int i;

    printf("10개의 정수를 입력하시오.\n");
    for (i=0; i<10; i++)
        scanf("%d", &num[i]);
    for (i=0; i<10; i++)
        printf("%d. %d\n", i+1, num[i]);
    
    return 0;
}
