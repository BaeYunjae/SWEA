#include <stdio.h>
#include <string.h>

int main()
{
    char names[100][20] = {"김아름", "이민석", "신희선", "민지숙", "장용철", "한나라"};
    char address[100][30] = {"부산", "대전", "광주", "수원", "서울", "제주"};
    char telno[100][20] = {"010-5674-6798", "010-9877-9876", "010-6758-9043", "010-3467-0987", "010-7655-9085", "010-6905-0984"};

    char sname[20];
    int i, count = 6;  // 현재 등록된 원소개수로 초기화

    printf("새로운 주소 정보를 추가하시오.\n");
    printf("이름? ");
    scanf("%s", names[count]);
    printf("주소? ");
    scanf("%s", address[count]);
    printf("전화번호? ");
    scanf("%s", telno[count]);
    count++;

// 조건부 컴파일 구문 (디버깅을 위한 표현) => 새로운 정보 추가의 확인하려면 0을 1로 변경
// 확인이 필요한 부분에 #if ~ #endif 문을 이용해 테스트 가능
#if 1
    for(i=0; i<count; i++)
        printf("%s, %s, %s\n", names[i], address[i], telno[i]);
#endif    

    while (1) {
        printf("\n 주소 확인을 원하는 사람 이름을 입력하시오. --> \n");
        scanf("%s", sname);                 // 검색할 사람 이름
        if (!strcmp(sname, "end")) break;   // 검색 종료
        for (i=0; i<count; i++)             // names 배열에 일치하는 이름 확인 (행 인덱스 바꿈)
            if(!strcmp(sname, names[i])) {  // 찾은 경우
                printf("%s 의 주소는 %s, 전화번호는 %s 입니다.\n",
                    sname, address[i], telno[i]);
                break;
            }
            if (i == count)                 // 못 찾은 경우
                printf("%s 는 존재하지 않습니다.\n", sname);         
    }
    return 0;
}
