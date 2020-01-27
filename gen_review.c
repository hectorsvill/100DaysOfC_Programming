#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void writeString(char *);
void copyInputToOutput();
void character_Counting();
int power(int, int);
void swap(int *, int *);
char* reverseString(char*, int);

int main(int argc, const char *argv[])
{
    // insert code here...
    char *str = "This\0";
    // writeString(str);
    // copyInputToOutput();
    // character_Counting();
    //    printf("%i\n", power(5, 4));

    // int a = 10;
    // int b = 199;
    // swap(&a,&b);
    // printf("%i, %i", a, b);

    char* newstr = reverseString(str, (int)strlen(str));
    printf("%s - %i\n", newstr, (int)strlen(str));

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}

int power(int base, int n)
{
    int p = 1;
    int i = 0;

    for (i = 1; i <= n; i++)
        p *= base;
    return p;
}

void character_Counting()
{
    long nc;
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0ld\n", nc);
}

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

char* reverseString(char *str, int length)
{
    char* reverseStr = (char*)malloc(length + 1);

    for (int i = 0; i < length; i++) {
        reverseStr[i] = str[length - 1 - i];
    }
    
    reverseStr[length] = 0;

    return reverseStr;
}