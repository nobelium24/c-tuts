#include <stdio.h>
#include <limits.h>  // For integer type limits
#include <float.h>   // For floating-point type limits

int main() {
    // CHAR (signed and unsigned)
    printf("CHAR_MIN (signed): %d\n", CHAR_MIN);
    printf("CHAR_MAX (signed): %d\n", CHAR_MAX);
    printf("UCHAR_MAX (unsigned): %u\n", UCHAR_MAX);

    // SHORT (signed and unsigned)
    printf("SHRT_MIN (signed): %d\n", SHRT_MIN);
    printf("SHRT_MAX (signed): %d\n", SHRT_MAX);
    printf("USHRT_MAX (unsigned): %u\n", USHRT_MAX);

    // INT (signed and unsigned)
    printf("INT_MIN (signed): %d\n", INT_MIN);
    printf("INT_MAX (signed): %d\n", INT_MAX);
    printf("UINT_MAX (unsigned): %u\n", UINT_MAX);

    // LONG (signed and unsigned)
    printf("LONG_MIN (signed): %ld\n", LONG_MIN);
    printf("LONG_MAX (signed): %ld\n", LONG_MAX);
    printf("ULONG_MAX (unsigned): %lu\n", ULONG_MAX);

    // FLOATING-POINT TYPES (float, double, long double)
    printf("FLT_MIN (float min): %e\n", FLT_MIN);
    printf("FLT_MAX (float max): %e\n", FLT_MAX);
    printf("DBL_MIN (double min): %e\n", DBL_MIN);
    printf("DBL_MAX (double max): %e\n", DBL_MAX);
    printf("LDBL_MIN (long double min): %Le\n", LDBL_MIN);
    printf("LDBL_MAX (long double max): %Le\n", LDBL_MAX);

    return 0;
}