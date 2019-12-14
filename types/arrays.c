#include <stdio.h>

void print_array(int array[], int length)
{
    if (!array || length <= 0)
    {
        return;
    }

    for (int i = 0; i < length; i++)
    {
        printf("|%10d", array[i]);
    }
    printf("|\n");
}

void print_two_d_arrays(int array[][3], int first_d_len)
{
    for (int i = 0; i < first_d_len; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("___________");
        }
        printf("\n");

        print_array(array[i], 3);

        for (int i = 0; i < 3; i++)
        {
            printf("___________");
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    {
        int array[3];

        /* populate the array */
        array[0] = 10;
        array[1] = 20;

        printf("******** ARRAY      ********\n");
        print_array(array, 3);
    }

    {
        int array[] = {1, 2, 3};

        printf("******** ARRAY-2     ********\n");
        print_array(array, 3);
    }

    {
        int two_d_array[3][3];

        two_d_array[0][1] = 1;
        two_d_array[0][2] = 2;
        two_d_array[0][3] = 3;

        two_d_array[0][0] = 10;
        two_d_array[1][0] = 20;
        two_d_array[2][0] = 30;

        printf("******** 2D ARRAY   ********\n");
        print_two_d_arrays(two_d_array, 3);
    }

    {
        int two_d_array[][3] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}};

        printf("******** 2D ARRAY-2  ********\n");
        print_two_d_arrays(two_d_array, 3);
    }

    {
        int arr[10];

        memset(arr, 0, sizeof(arr));

        printf("arr:");
        print_array(arr, 10);
    }

    {
        int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
        int arr2[10];

        memcpy(arr2, arr1, sizeof(arr1));

        printf("arr1:");
        print_array(arr1, sizeof(arr1));
        printf("arr2:");
        print_array(arr2, sizeof(arr2));
    }

    {
        int arr1[] = {1,2,3,4,5,6,7};
        int arr2[] = {1,3,2,4,5,6,7};

        int answer = memcmp(arr1, arr2, sizeof(arr1));
        printf("memcmp answer is: %d\n", answer);
    }

    return 0;
}
