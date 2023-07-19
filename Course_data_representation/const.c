#include <stdio.h>

int main()
{
    const int num1 = 100;          // 변수값 변경 불가, 상수처럼 사용
    printf("num1 = %d", num1);
    // num1 = 200;                 // num1 read-only
    return 0;
}
