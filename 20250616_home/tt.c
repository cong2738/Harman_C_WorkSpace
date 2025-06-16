#include <stdio.h>
int main(void)
{
    char str[80];
    printf("문장 입력: "); 
    gets(str);
    int i = 0;
    while (str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 'a' + 'A';
        }
        i++;
    }

    printf("바뀐 문장: %s", str);
}