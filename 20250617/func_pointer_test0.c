#include <stdio.h>

int sum(int, int);
int sub(int, int);

int main(void)
{
    int (*fp)(int, int);
    int res;
    fp = sum;
    res = fp(20, 10);
    printf("result: %d\n", res);
    fp = sub;
    res = fp(20, 10);
    printf("result: %d\n", res);
}

int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}