#include <stdio.h>
int main(void)
{
    unsigned long long f;
    int n;

    do
    {
        printf("계승을 구할 정수를 입력하시오: ");
        scanf("%d", &n);
        if (n < 0)
            printf("\n음수를 입력했습니다. 양수를 입력하세요.\n");

    } while (n < 0);

    printf("%d! = ", n);
    f = n;
    while (--n)
        f *= n;
    printf("%llu\n", f);
    return 0;
}