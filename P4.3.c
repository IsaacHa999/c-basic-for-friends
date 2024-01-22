#include <stdio.h>
int main(void)
{
    unsigned long long f;
    int n;
    printf("계승을 구할 정수를 입력하시오: ");
    scanf("%d", &n);
    printf("%d! = ", n);
    f = n;
    while (--n)
        f *= n;
    printf("%llu\n", f);
    return 0;
}