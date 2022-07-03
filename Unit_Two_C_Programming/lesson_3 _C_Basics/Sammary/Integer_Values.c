#include <stdio.h>
#include <limits.h>

void main() {
    printf("___________________ Unsigned short ___________________ \n");
    unsigned short minUnsignedShort = 0, maxUnsignedShort = USHRT_MAX;
    printf("The size of \"short unsigned int\" is : %u bytes = %u bits , ======> Depend on data type. \n",
           sizeof(short unsigned int), sizeof(short unsigned int) * 8);
    printf("The size of \"unsigned short\" is : %u bytes = %u bits,      ======> Depend on Compiler.\n",
           sizeof(unsigned short), sizeof(unsigned short) * 8);
    printf("The range of \"unsigned short\" is from %u to %u\n ", minUnsignedShort, maxUnsignedShort);
    printf("___________________ Signed short ___________________ \n");
    short minShort = SHRT_MIN, maxShort = SHRT_MAX;
    printf("The size of \"short int\" is : %d bytes = %d bits , ======> Depend on data type. \n", sizeof(short int),
           sizeof(short int) * 8);
    printf("The size of \"short\" is : %d bytes = %d bits,      ======> Depend on Compiler.\n", sizeof(short),
           sizeof(short) * 8);
    printf("The range of \"short\" is from %d to %d\n ", minShort, maxShort);
    printf("___________________ Unsigned int ___________________ \n");
    unsigned int minUnsignedInt = 0, maxUnsignedInt = UINT_MAX;
    printf("The size of \"unsigned int\" is : %u bytes = %u bits, ======> Depend on Compiler.\n", sizeof(unsigned int),
           sizeof(unsigned int) * 8);
    printf("The range of \"unsigned int\" is from %u to %u\n ", minUnsignedInt, maxUnsignedInt);
    printf("___________________ Signed int ___________________ \n");
    int minInt = INT_MIN, maxInt = INT_MAX;
    printf("The size of \"int\" is : %d bytes = %d bits, ======> Depend on Compiler.\n", sizeof(int),
           sizeof(int) * 8);
    printf("The range of \"int\" is from : %d to %d\n ", minInt, maxInt);
    printf("___________________ Unsigned long ___________________ \n");
    unsigned long minUnsignedLong = 0, maxUnsignedLong = ULONG_MAX;
    printf("The size of \"long unsigned int\" is : %lu bytes = %lu bits , ======> Depend on data type. \n",
           sizeof(long unsigned int), sizeof(long unsigned int) * 8);
    printf("The size of \"unsigned long\" is : %lu bytes = %lu bits,      ======> Depend on Compiler.\n",
           sizeof(unsigned long), sizeof(unsigned long) * 8);
    printf("The range of \"unsigned long\" is from %lu to l%u\n ", minUnsignedLong, maxUnsignedLong);
    printf("___________________ Signed long ___________________ \n");
    long minLong = LONG_MIN, maxLong = LONG_MAX;
    printf("The size of \"long int\" is : %ld bytes = %ld bits , ======> Depend on data type. \n", sizeof(long int),
           sizeof(short int) * 8);
    printf("The size of \"long\" is : %ld bytes = %ld bits,      ======> Depend on Compiler.\n", sizeof(long),
           sizeof(short) * 8);
    printf("The range of \"long\" is from %ld to %ld\n ", minLong, maxLong);
    printf("___________________ Unsigned long long ___________________ \n");
    unsigned long long minUnsignedLongLong = 0, maxUnsignedLongLong = ULLONG_MAX;
    printf("The size of \"unsigned long long\" is : %llu bytes = %llu bits, ======> Depend on Compiler.\n", sizeof(unsigned long long),
           sizeof(unsigned long long) * 8);
    printf("The range of \"unsigned long long\" is from %llu to %llu\n ", minUnsignedLongLong, maxUnsignedLongLong);
    printf("___________________ long long ___________________ \n");
    long long minLongLong = LLONG_MIN, maxLongLong = LLONG_MAX;
    printf("The size of \"long long\" is : %lld bytes = %lld bits, ======> Depend on Compiler.\n", sizeof(long long),
           sizeof(long long) * 8);
    printf("The range of \"long long\" is from : %lld to %lld\n ", minLongLong, maxLongLong);


}
