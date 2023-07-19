#include <stdio.h>
#include <string.h>

int main()
{
    char names[][20] = {"seo", "lee", "lim", "shin", "yook"};
    char sname[20];
    int i;

    for(i=0; i<5; i++) 
        printf("%d. %s\n", i+1, names[i]);
    
    printf("이름 입력 --> ");
    scanf("%s", &sname);
    for(i=0; i<5; i++)
        if(strcmp(sname, names[i]) == 0)
            printf("%s는 %d 번째 원소입니다.", sname, i+1);
        return 0;        
}
