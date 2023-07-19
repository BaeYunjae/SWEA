// strcpy, strcat, strcmp, strlen
#include <stdio.h>
#include <string.h>  // 문자열처리 함수 사용을 위해 포함

int main()
{
    char big_array[500] = "";  // 널문자로 초기화, 빈 배열
    char string[80];
    int max = sizeof(big_array) / sizeof(big_array[0]);
    while(1) {
        printf("문자열을 입력하시오 --> ");
        scanf("%s", string);
        if (strcmp(string, "end") == 0)  // 입력된 문자열이 "end"면
            break;                       // 종료
        if ((strlen(big_array) + strlen(string) + strlen(", ")) < max) {
            strcat(big_array, string);
            strcat(big_array, ", ");
        }
    }

    printf("big_array : [ %s ]\n", big_array);
    return 0;

}
