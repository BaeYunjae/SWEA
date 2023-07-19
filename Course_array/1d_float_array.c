#include <stdio.h>

int main()
{
    float weight[10];
    // total은 누적 연산을 위해 선언과 동시에 0으로 초기화
    float total = 0, avg;  
    int i;

    printf("10명의 몸무게를 입력하시오.\n");
    for (i=0; i<10; i++){
        scanf("%f", &weight[i]);
        total += weight[i];
    }
    avg = total / 10;
    printf("평균 몸무게: %.2f", avg);
    return 0;
}
