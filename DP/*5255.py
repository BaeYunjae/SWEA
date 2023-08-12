# [파이썬 S/W 문제해결 최적화] 2일차 - 타일 붙이기
T = int(input())

for test_case in range(1, T + 1):
    n = int(input())
    arr = [-1] * (n + 1)
    for i in range(1, n + 1):
        if i == 1:        # 2x1 공간은 2x1 타일 1개
            arr[i] = 1
        elif i == 2:      # 2x2 공간은 2x1 타일 2개 가로로, 세로로, 2x2 타일 1개
            arr[i] = 3
        elif i == 3:
            arr[i] = 6
        else:
            arr[i] = arr[i - 1] + 2 * arr[i - 2] + arr[i - 3]

    print(f'#{test_case} {arr[n]}')
