#include <stdio.h>

int main()
{
    int score;
    do
    {
        scanf("%d", &score);
    } while (score < 0 || score > 100);
    printf("valid score!");
    return 0;
}
