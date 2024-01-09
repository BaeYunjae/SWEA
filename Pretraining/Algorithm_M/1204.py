## 최빈수 구하기 ##
T = int(input())

for _ in range(T):
    test_num = int(input())
    scores = list(map(int, input().split()))
    cnt = [0] * 101
    ans = 0

    for score in scores:
        cnt[score] += 1
        if cnt[score] >= cnt[ans]:  # 개수가 같으면 숫자가 큰 게 답
            ans = score

    print(f'#{test_num} {ans}')
