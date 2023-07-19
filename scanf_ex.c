#include <stdio.h>

int main()
{
    int num;
    char letter;
    float realnum;

    printf("number? ");
    scanf("%d", &num);
    scanf("%*c");            // 데이터 입력 시 그 뒤에 오는 엔터 문자처리
    printf("realnumber? ");
    scanf("%f", &realnum);
    scanf("%*c");
    printf("letter? ");
    scanf("%c", &letter);

    return 0;
}
