#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    {
        char string[100];

        {
            memset(string, 1, sizeof(string));
        }

        string[0] = 'y';
        string[1] = 'e';
        string[2] = 'h';
        string[3] = 'u';
        string[4] = 'd';
        string[5] = 'a';
        string[6] = 0;

        printf("string:%s\n", string);
    }

    {
        char string[100] = "yehuda nahon";

        printf("string:%s\n", string);
    }

    {
        char string[] = "hello my name is yehuda";
        char string2[1024];

        {
            memset(string2, 1, sizeof(string2));
        }

        memcpy(string2, string, 23);

        printf("string1:%s\n", string);
        printf("string2:%s\n", string2);
    }

    {
        char string[100];

        {
            memset(string, 1, sizeof(string));
        }

        strncpy(string, "yehuda nahon", strnlen("yehuda nahon", sizeof(string)));

        printf("string:%s\n", string);
    }

    return 0;
}
