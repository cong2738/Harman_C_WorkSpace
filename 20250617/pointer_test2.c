#include <stdio.h>

int main(void)
{
    printf("abcd 저장된 시작 주소 값: %p\n", "abcd");
    printf("두 번째 문자의 주소 값: %p\n", "abcd" + 1);
    printf("첫 번째 문자: %c\n", *"abcd");
    printf("두 번째 문자: %c\n", *("abcd" + 1));
    printf("배열로 표현한 세 번째 문자: %c", "abcd"[2]);
}