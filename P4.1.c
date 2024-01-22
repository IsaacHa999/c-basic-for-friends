#include <stdio.h>
int main(void)
{
    int math = 0, english = 0, fail = 0;

    printf("수학 점수(정수) : ");
    scanf("%d", &math);
    printf("영어 점수(정수) : ");
    scanf("%d", &english);
    // 단축평가
    math >= 60 || fail++;
    english >= 60 || fail++;

    // && 단축평가
    fail &&printf("낙제 과목 수는 %d개 입니다.\n", fail);

    return 0;
}