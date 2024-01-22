#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch = 71;
    int in = 'h';

    ch++;
    in = toupper(in);
    printf("ch = %c or %d\n", ch, ch);
    printf("in = %c or %d\n", in, in);
    return 0;
}