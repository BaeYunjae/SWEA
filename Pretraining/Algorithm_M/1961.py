## 숫자 배열 회전 ##
import sys
sys.stdin = open('input_1959', 'r')

T = int(input())

for tc in range(1, T + 1):
    n, m = map(int, input().split())
    ls1 = list(map(int, input().split()))
    ls2 = list(map(int, input().split()))

    if n >= m:
        len_l, len_s = n, m
        long, short = ls1, ls2
    else:
        len_l, len_s = m, n
        long, short = ls2, ls1

    MAX = -10e9

    for i in range(len_l - len_s + 1):
        total = 0
        for j in range(len_s):
            total += short[j] * long[i + j]

        if MAX < total:
            MAX = total

    print(f'#{tc} {MAX}')

