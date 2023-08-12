# [파이썬 S/W 문제해결 최적화] 2일차 - 이항계수
def bino(n, a, b):
    t = min(a, b)
    for i in range(n + 1):
        for j in range(min(i, t) + 1):
            if not arr[i][j]:
                if j == 0 or j == i:
                    arr[i][j] = 1
                else:
                    arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j]
    return arr[n][t]

T = int(input())
for test_case in range(1, T + 1):
    n, a, b = map(int, input().split())
    arr = [[0 for _ in range(n + 1)] for _ in range(n + 1)]
    print(f'#{test_case} {bino(n, a, b)}')
