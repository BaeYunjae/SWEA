#define _CRT_SECURE_NO_WARNINGS // 보안 에러 방지 헤더
#include <iostream>
#include <cstring>				// memset이 들어있음

using namespace std;

// 테스트케이스 개수
// T는 안 바뀌는 것이기 때문에 전역변수로 선언하기도 함
int T;
int maxScore;
int maxCnt;
int DAT[101] = { 0 };

// 초기화 함수
void init()
{
	// DAT[101] = { 0 }; <- 처음에는 되는데, 두번째부터는 안 됨
	
	// DAT 배열을 초기화시켜야 한다
	/*
	for (int i = 0; i < 101; i++)
	{
		DAT[i] = 0;
	}
	*/
	
	memset(DAT, 0, sizeof(DAT)); // -1, 0만 되고 다른 숫자는 안 됨
								 // 다른 건 위처럼 써야 함
	
	maxScore = 0;
	maxCnt = 0;

}

void input()
{
	for (int i = 0; i < 1000; i++)
	{
		int score;
		cin >> score;
		DAT[score]++;  // 입력 말고도 간단한 건 넣어도 됨
	}
}

void solve()
{
	for (int i = 0; i <= 100; i++)
	{
		if (DAT[i] >= maxCnt)
		{
			maxCnt = DAT[i];
			maxScore = i;
		}
	}
}

int main()
{
	// 입력받기, 제출 시 주석 처리
	// freopen("sample_input.txt", "r", stdin);
	cin >> T;

	for (int tc = 1; tc <= T; tc++)
	{
		// 각 테스트 케이스의 첫 줄에 있는 테케 번호 받기
		int caseNum;
		cin >> caseNum;

		init();
		input();
		solve();

		cout << "#" << tc << " " << maxScore << endl;
	}

}
