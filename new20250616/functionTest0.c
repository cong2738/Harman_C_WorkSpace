#include <stdio.h>

int sum(int a, int b);

int main(void)
{
    int a = 10, b = 20;
    int res;
    res = sum(a, b);
    printf("result : %d\n", res);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}