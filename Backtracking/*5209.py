# [파이썬 S/W 문제해결 구현] 5일차 - 최소 생산 비용
def backtrack(depth, sums):
    global ans

    # depth가 n이면 return
    if depth == n:
        ans = min(ans, sums)
        return

    # 가지치기
    if ans <= sums:
        return

    for i in range(n):
        if not visited[i]:  # 안 갔으면
            visited[i] = 1
            backtrack(depth + 1, sums + fac[depth][i])
            visited[i] = 0

T = int(input())

for test_case in range(1, T + 1):
    n = int(input())
    fac = [list(map(int, input().split())) for _ in range(n)]

    ans = 987654321
    visited = [0] * n
    backtrack(0, 0)
    print(f'#{test_case} {ans}')
