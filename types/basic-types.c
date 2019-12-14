#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("*************   CHAR        ************\n");
    char character = 'c';
    printf("Storage size for char : %ld \n", sizeof(character));
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);

    printf("*************   INT         ************\n");
    int integer = 100;
    printf("Storage size for int : %ld \n", sizeof(integer));
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);

    printf("************* LONG INT      ************\n");
    long int num2 = 100000;
    printf("Storage size for unsigned long int : %ld \n", sizeof(num2));
    printf("LONG_MAX    :   %ld\n", (long)LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long)LONG_MIN);

    printf("************* SHORT INT     ************\n");
    short short_int = 30000;
    printf("Storage size for short : %ld \n", sizeof(short_int));
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);

    printf("************* UNSIGNED      ************\n");
    unsigned char un_ch = 250;
    unsigned int un_int = 300000;
    printf("Storage size for unsigned char : %ld \n", sizeof(un_ch));
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);

    printf("Storage size for unsigned int : %ld \n", sizeof(un_int));
    printf("UINT_MAX    :   %u\n", (unsigned int)UINT_MAX);

    printf("************* UNSIGNED LONG ************\n");
    unsigned long int un_long = 100000000;
    printf("Storage size for unsigned long : %ld \n", sizeof(un_long));
    printf("ULONG_MAX   :   %lu\n", (unsigned long)ULONG_MAX);

    printf("************* UNSIGNED SHORT************\n");
    unsigned short un_short;
    printf("Storage size for unsigned short : %ld \n", sizeof(un_short));
    printf("USHRT_MAX   :   %d\n", (unsigned short)USHRT_MAX);

    printf("************* FLOAT         ************\n");
    float small_friction = 10.13;
    printf("Storage size for float : %ld \n", sizeof(float));
    printf("FLT_MAX     :   %g\n", (float)FLT_MAX);
    printf("FLT_MIN     :   %g\n", (float)FLT_MIN);
    printf("-FLT_MAX    :   %g\n", (float)-FLT_MAX);
    printf("-FLT_MIN    :   %g\n", (float)-FLT_MIN);
    printf("Precision value: %d\n", FLT_DIG);

    printf("************* DOUBLE        ************\n");
    double big_friction = 10.12345432;
    printf("Storage size for double : %ld \n", sizeof(double));
    printf("DBL_MAX     :   %g\n", (double)DBL_MAX);
    printf("DBL_MIN     :   %g\n", (double)DBL_MIN);
    printf("-DBL_MAX     :  %g\n", (double)-DBL_MAX);
    printf("Precision value: %d\n", DBL_DIG);

    // void  = nothing

    return 0;
}
