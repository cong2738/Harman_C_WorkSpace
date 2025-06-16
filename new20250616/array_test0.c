#include <stdio.h>
#include<string.h>

int main(void)
{
    char str[80] = "applejam";
    printf("최초 문자열: %s\n", str);
    printf("문자열 입력: ");
    scanf("%s", &str);
    printf("입력 후 문자열: %s\n", str);

    printf("null test: ");
    str[2] = NULL; // '/000' null character
    printf("%s\n", str);

    return 0;
}