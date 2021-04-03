#include <stdio.h>

void change(char* a, char* b)
{
    const char old_a = *a;
    *a = *b;
    *b = old_a;
}

int main(void)
{

    char a = 'x';
    char b = 'y';


    printf("a is now %c and b is now %c\n", a, b);

    change(&a, &b);

    printf("a is now %c and b is now %c\n", a, b);

    return 0;
}