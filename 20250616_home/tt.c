#include <stdio.h>
int main(void)
{
    char str[80];
    printf("문장 입력: "); 
    scanf("%s", &str);
    int i = 0;
    do
    {
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 'a' + 'A';
        }
    } while (str[i++]);

    printf("바뀐 문장: %s", str);
}