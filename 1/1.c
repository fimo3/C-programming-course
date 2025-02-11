#include <stdio.h>

#define PRINT_TYPE_INFO(type, max_signed, min_signed, max_unsigned) { \
    printf("%-12s %-10s %-10lu %-15lld %-15lld %-10s %-15llu\n", \
        #type, "%d", sizeof(type), (long long int)max_signed, (long long int)min_signed, "%u", (unsigned long long int)max_unsigned); \
}

int main() {
    printf("%-12s %-10s %-10s %-15s %-15s %-10s %-15s\n", 
           "Type", "Format", "Size (bytes)", "Max Signed", "Min Signed", "Unsigned Format", "Max Unsigned");
    
    PRINT_TYPE_INFO(char, 127, -128, 255);
    PRINT_TYPE_INFO(short, 32767, -32768, 65535);
    PRINT_TYPE_INFO(int, 2147483647, -2147483648, 4294967295);
    PRINT_TYPE_INFO(long, 2147483647, -2147483648, 4294967295);
    PRINT_TYPE_INFO(long long, 9223372036854775807, -9223372036854775808, 18446744073709551615);

    return 0;
}
