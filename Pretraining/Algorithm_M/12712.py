## 파리퇴치3 ##
import sys
sys.stdin = open('input_12712', 'r')

T = int(input())

# 분사 방향
# 상, 하, 좌, 우
dx_T = [0, 0, -1, 1]
dy_T = [-1, 1, 0, 0]
# 우상, 우하, 좌하, 좌상
dx_X = [1, 1, -1, -1]
dy_X = [-1, 1, -1, 1]

# 좌표가 칸을 벗어나지 않는지 확인
def in_range(x, y):
    return 0 <= x < n and 0 <= y < n

# 배열의 각 칸(curr_x, curr_y)에서 분사 형태(dir_x, dir_y)에 따라 잡을 수 있는 파리 수 세기
def count_fries(curr_x, curr_y, dir_x, dir_y):
    # 분사 위치에 있는 파리 수도 포함
    cnt = grid[curr_x][curr_y]

    # + : 상, 하, 좌, 우 / x : 우상, 우하, 좌하, 좌상
    for x, y in zip(dir_x, dir_y):
        # 스프레이 세기만큼 이동하면서 파리 개체 수 더함
        # 이동 수에 분사 위치도 포함됨
        for i in range(1, m):
            nx, ny = curr_x + x * i, curr_y + y * i
            # 파리 개체 수가 존재할 수 있는 곳이면 세기
            if in_range(nx, ny):
                cnt += grid[nx][ny]

    return cnt

# + 분사와 x 분사 중에서 더 큰 값을 찾음
def find_max_kill(gr_x, gr_y):
    maxKill[gr_x][gr_y] = max(count_fries(gr_x, gr_y, dx_T, dy_T), count_fries(gr_x, gr_y, dx_X, dy_X))

for test_case in range(1, T + 1):
    n, m = map(int, input().split())  # 배열 크기, 스프레이 세기
    grid = [list(map(int, input().split())) for _ in range(n)]  # 영역별 파리 개체수

    # 시작 위치
    s_x, s_y = 0, 0
    maxKill = [[0] * n for _ in range(n)]

    # 칸별로 잡을 수 있는 최대 파리수 저장
    for i in range(n):
        for j in range(n):
            find_max_kill(i, j)

    answer = 0
    for i in range(n):
        for j in range(n):
            if answer < maxKill[i][j]:
                answer = maxKill[i][j]

    print(f'#{test_case} {answer}')
