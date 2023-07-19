#include <stdio.h>

void func1();      // 받을 것, 내놓을 것 없음 목시적으로
void func2(void);  // 받을 것, 내놓을 것 없음 명시적으로
int main()
{
    printf("main called\n");
    func1();
    printf("main returned\n");
    return 0;
}

void func1()
{
    printf("func1 called\n");
    func2();
    printf("func1 returned\n");
    return;
}

void func2()
{
    printf("func2 called\n");
    printf("func2 returned\n");
}
