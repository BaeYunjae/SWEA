#include <stdio.h>

int main()
{
    float wegiht[] = {56.7, 78.9, 55.4, 68.9};
    int i, count;

    // 배열에 할당된 메모리 크기 / 원소에 할당된 메모리 크기
    count = sizeof(wegiht) / sizeof(wegiht[0]);  // 원소의 개수
    printf("count : %d\n", count);
    for (i=0; i<count; i++)
        printf("%d. %.2f\n", i, wegiht[i]);
    return 0;
}
