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

int main(int argc, const char *argv[])
{
    // insert code here...

    char *str = "This is a C string\0";
    writeString(str);
    copyInputToOutput();

    printf("\n");
    return 0;
}
