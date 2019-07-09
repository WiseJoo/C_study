#include <stdio.h>
int main()
{
    char s[] = "abc";
    char *p = "abc";
    char a[] = "xyz";

    *(p+1) = 'c';
    printf("%s", p);

}