#include <stdio.h>

int is_prime(int number);

int main()
{
    int number;           // 1 ~ 10000
    int prime_check;      // 2 ~ n - 1
    int prime_count = 0;  // 소수 개수

    for (number = 2; number <= 10000; number++)
        if (is_prime(number)) prime_count++;
    
    printf("소수의 개수: %d", prime_count);
    return 0;
}


int is_prime(int number)
{
    int prime_check;
    for (prime_check=2; prime_check < number; prime_check++)
        if (number % prime_check == 0) return 0;
    return 1;
}
