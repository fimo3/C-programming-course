#include <stdio.h>
#include <limits.h>
#include <stdint.h>

// Макро за принтиране на информация за типа
#define PRINT_TYPE_INFO(TYPE, FORMAT, UFORMAT)                                                 \
    printf("| %-15s | %-10s | %-6lu | %-20ld | %-20ld | %-10s | %-20lu |\n", #TYPE, FORMAT,    \
           sizeof(TYPE), (long)(TYPE##_MAX), (long)(TYPE##_MIN), UFORMAT, (unsigned long)(TYPE##_MAX))

int main() {
    // Принтиране на заглавието на таблицата
    printf("+-----------------+------------+--------+----------------------+----------------------+------------+----------------------+\n");
    printf("| Type            | Format     | Bytes  | Max Signed           | Min Signed           | UFormat    | Max Unsigned         |\n");
    printf("+-----------------+------------+--------+----------------------+----------------------+------------+----------------------+\n");

    // Информация за различните типове
    printf("| %-15s | %-10s | %-6lu | %-20d | %-20d | %-10s | %-20u |\n", 
           "char", "%d", sizeof(char), SCHAR_MAX, SCHAR_MIN, "%u", UCHAR_MAX);
    printf("| %-15s | %-10s | %-6lu | %-20d | %-20d | %-10s | %-20u |\n", 
           "short", "%d", sizeof(short), SHRT_MAX, SHRT_MIN, "%u", USHRT_MAX);
    printf("| %-15s | %-10s | %-6lu | %-20d | %-20d | %-10s | %-20u |\n", 
           "int", "%d", sizeof(int), INT_MAX, INT_MIN, "%u", UINT_MAX);
    printf("| %-15s | %-10s | %-6lu | %-20ld | %-20ld | %-10s | %-20lu |\n", 
           "long", "%ld", sizeof(long), LONG_MAX, LONG_MIN, "%lu", ULONG_MAX);
    printf("| %-15s | %-10s | %-6lu | %-20lld | %-20lld | %-10s | %-20llu |\n", 
           "long long", "%lld", sizeof(long long), LLONG_MAX, LLONG_MIN, "%llu", ULLONG_MAX);

    // Край на таблицата
    printf("+-----------------+------------+--------+----------------------+----------------------+------------+----------------------+\n");

    return 0;
}
