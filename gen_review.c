#include <stdio.h>
#include <unistd.h>

void writeString(char *str)
{
    while (*str)
        write(0, str++, 1);
}

void copyInputToOutput()
{
    int c;

    c = getchar();
    while (c != EOF)
    {

        if (c == 100)
        {
            break;
        }
        putchar(c);
        c = getchar();
    }
}

int power(int, int);

void character_Counting()
{
    long nc;
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0ld\n", nc);
}

int main(int argc, const char *argv[])
{
    // insert code here...
    // char *str = "This is a C string\0";
    // writeString(str);
    // copyInputToOutput();
    // character_Counting();
    printf("%i\n", power(5, 4));
    return 0;
}

int power(int base, int n)
{
    int p = 1;
    int i = 0;

    for (i = 1; i <= n; i++)
        p *= base;
    return p;
}