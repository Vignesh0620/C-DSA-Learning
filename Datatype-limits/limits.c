#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(void)
{
    printf("sizeof(char) = %lu",sizeof(char));
    printf("\nsizeof(short) = %lu",sizeof(short));
    printf("\nsizeof(int) = %lu",sizeof(int));
    printf(("\nsizeof(long) = %lu"),sizeof(long));
    printf("\nsizeof(float) = %lu",sizeof(float));
    printf("\nsizeof(double) = %lu",sizeof(double));
    printf("\nsizeof(long double) = %lu",sizeof(long double));

    printf("CHAR_MIN = %d",SCHAR_MIN);
    printf("\nCHAR_MAX = %d",SCHAR_MAX);
    printf("\nUCHAR_MAX = %d",UCHAR_MAX);

    printf("\nSHRT_MIN = %d",SHRT_MIN);
    printf("\nSHRT_MAX = %d",SHRT_MAX);
    printf("\nUSHRT_MAX = %d",USHRT_MAX);   

    printf("\nINT_MIN = %d",INT_MIN);
    printf("\nINT_MAX = %d",INT_MAX);
    printf("\nUINT_MAX = %u",UINT_MAX);

    printf("\nLONG_MIN = %ld",LONG_MIN);
    printf("\nLONG_MAX = %ld",LONG_MAX);
    printf("\nULONG_MAX = %lu",ULONG_MAX);

    printf("\nFLT_MIN = %e",FLT_MIN);
    printf("\nFLT_MAX = %e",FLT_MAX);

    printf("\nDBL_MIN = %e",DBL_MIN);
    printf("\nDBL_MAX = %e",DBL_MAX);

    printf("\nLDBL_MIN = %Le",LDBL_MIN);
    printf("\nLDBL_MAX = %Le",LDBL_MAX);

    /*No of digits of precision*/
    printf("\nFLT_DIG = %d",FLT_DIG);
    printf("\nDBL_DIG = %d",DBL_DIG);
    printf("\nLDBL_DIG = %d",LDBL_DIG);
    return 0;
}