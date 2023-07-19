#include <stdio.h>

void call_by_reference(int* number);

void call_by_reference(int* number)
{
    printf("number = %d in call_by_reference\n", *number);
    *number = 20;
}

int main()
{
    int number = 10;

    call_by_reference(&number);
    printf("number = %d in main\n", number);
    return 0;
}
