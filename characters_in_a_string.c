#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int l;
    scanf("%[^
]s",s);
    l=strlen(s);
    printf("%d",l);
    return 0;
}