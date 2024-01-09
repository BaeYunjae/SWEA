## 스도쿠 검증 ##
import sys
sys.stdin = open('input_1974', 'r')

# 행 확인
def row_check(s1):
    check = True
    for r in s1:
        if len(set(r)) != 9:
            check = False
            break

    return check

# 열 확인
def col_check(s2):
    colList = list([] for _ in range(9))
    check = True

    for i in range(9):
        for j in range(9):
            colList[i].append(s2[j][i])

    for c in colList:
        if len(set(c)) != 9:
            check = False
            break

    return check

# 3x3 확인
def square_check(s3):
    squareList = []
    three_set = []
    check = True

    for i in range(0, 7, 3):
        for j in range(9):
            three_set.append(s3[j][i : i + 3])

    for i in range(9):
        for j in range(0, 27, 3):
            squareList.append(three_set[j : j + 3])

    for i in range(27):
        elem = []
        for j in range(3):
            for k in range(3):
                elem.append(squareList[i][j][k])

        if len(set(elem)) != 9:
            check = False
            break

    return check

T = int(input())

for test_case in range(1, T + 1):
    sudoku = [list(map(int, input().split())) for _ in range(9)]
    col_check(sudoku)
    if row_check(sudoku) and col_check(sudoku) and square_check(sudoku):
        answer = 1
    else:
        answer = 0

    print(f'#{test_case} {answer}')
