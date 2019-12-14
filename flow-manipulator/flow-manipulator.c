#include <stdio.h>

int main(int argc, char const *argv[])
{

    {
        int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int sum = 0;
        int i;

        for (i = 0; i < 10; i++)
        {
            sum += array[i];
        }

        /* sum now contains a[0] + a[1] + ... + a[9] */
        printf("Sum of the array is %d\n", sum);
    }

    {
        int n = 0;
        while (n < 10)
        {
            n++;

            /* check that n is odd */
            if (n % 2 == 1)
            {
                /* go back to the start of the while block */
                continue;
            }

            /* we reach this code only if n is even */
            printf("The number %d is even.\n", n);
        }
    }

    {
        char grades[] = {'B', 'A', 'C', 'D', 'F', 'Z'};

        for (int i = 0; i < sizeof(grades) / sizeof(grades[0]); i++)
        {
            switch (grades[i])
            {
            case 'A':
                printf("Excellent!\n");
                break;
            case 'B':
            case 'C':
                printf("Well done\n");
                break;
            case 'D':
                printf("You passed\n");
                break;
            case 'F':
                printf("Better try again\n");
                break;
            default:
                printf("Invalid grade\n");
            }

            printf("Your grade is  %c\n", grades[i]);
        }
    }

    return 0;
}
