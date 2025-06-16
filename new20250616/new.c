#include <stdio.h>
int main()
{
    int a, b, c;
    a = 10, b = 20, c = a + b;
    printf("hello world!\n");
    printf("%d + %d = %d\n", a, b, c);

    float ft = 1.234567899123456789;
    double db = 1.234567899123456789;
    printf("float형 변수의 값: %.20f\n", ft);
    printf("double형 변수의 값: %.20lf\n", db);

    a = 5, b = 5;
    int pre, post;
    pre = (++a) * 3;  // 전위형은 미리 적용된다
    post = (b++) * 3; // 후위형은 연산 이후에 적용된다
    // 주의하도록.
    printf("초깃값 a = %d, b = %d\n", a, b);
    printf("전위형: (++a)*3 = %d, 후위형: (b++)*3 = %d\n", pre, post);

    return 0;
}