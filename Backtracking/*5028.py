# [파이썬 S/W 문제해결 구현] 5일차 - 전기버스2
def dfs(idx, cnt, battery):
    global ans
    # 가지치기
    if ans <= cnt: return

    # 종료 조건
    if idx == n:
        ans = min(ans, cnt)
        return

    # 가지치기를 고려하는 경우: 유망한 답이 먼저 나오는 방향으로 호출
    # 교체하지 않는 경우
    if battery > 0:                     # 배터리 잔량 > 0
        dfs(idx + 1, cnt, battery - 1)  # 한 정류장 지나서 1 뺀다
    # 교체하는 경우
    dfs(idx + 1, cnt + 1, s[idx] - 1)   # 새로운 배터리, 잔량이 1 빼져서 온다

T = int(input())

for t in range(T):
    s = list(map(int, input().split()))
    n = s[0]
    ans = n              # 모든 정류장에서 교체할 경우 n
    dfs(2, 0, s[1] - 1)  # 1번 정류장에서는 교체횟수X, 2번부터 진행
    print(f"#{t + 1} {ans}")
