#include <stdio.h>
int main(void)
{
    int value;
    printf("정수를 입력하세요 : ");
    scanf("%d", &value);
    printf("입력한 정수는 %d입니다.\n", value);
    printf("%p", &value);
    return 0;
}