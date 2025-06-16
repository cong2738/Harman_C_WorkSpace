#include <stdio.h>
int main()
{
    int a;
    printf("단수: ");
    scanf("%d", &a);
    for (size_t i = 1; i < 10; i++)
    {
        printf("%d * %d = %d\n", a, i, a * i);
    }
}