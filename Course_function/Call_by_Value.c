#include <stdio.h>

void call_by_value(int number);

void call_by_value(int number)
{
    printf("BEFORE: number = %d in call_by_value\n ", number);
    number = 20;
    printf("AFTER: number = %d in call_by_value\n", number);
}

int main()
{
    int number = 10;
    call_by_value(number);
    // number 변수는 이름은 동일하지만 서로 다른 변수
    // 메모리 할당이 서로 다른 곳에 이루어지기 때문
    printf("number = %d in main\n", number);  
    return 0;
}
