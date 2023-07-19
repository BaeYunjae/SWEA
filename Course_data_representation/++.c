#include <stdio.h>

int main()
{
    int n1, n2, n3;
    n1 = 1;
    n2 = 1;
    n3 = n1++ + ++n2;
    printf("n1 = %d, n2 = %d, n3 = %d", n1, n2, n3);
    return 0;
}
