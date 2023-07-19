#include <stdio.h>

int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    while (n != -999)
    {
        cnt++;
        scanf("%d", &n);
    }
    printf("%d", cnt);
    return 0;
}
