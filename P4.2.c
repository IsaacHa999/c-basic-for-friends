#include <stdio.h>
int main(void)
{
    int f1 = 0, f2 = 1,f3;

    f3 = f1 + f2;
    while(f3 < 100)
    {
        f1 = f2;
        f2 = f3;
        f3 = f1 + f2;
    }
    ptinf("100보다 큰 피보나치 수열의 첫 번째 항은 %d입니다.\n", f3);
    return 0;
}