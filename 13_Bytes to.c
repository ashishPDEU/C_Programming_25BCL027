#include <stdio.h>

int main() {
    long long bytes;
    double kb, mb, gb;

    printf("Enter size in bytes: ");
    scanf("%lld", &bytes);

    kb = bytes / 1024.0;
    mb = kb / 1024.0;
    gb = mb / 1024.0;

    printf("%lld Bytes = %.2f KB\n", bytes, kb);
    printf("%lld Bytes = %.2f MB\n", bytes, mb);
    printf("%lld Bytes = %.2f GB\n", bytes, gb);

    return 0;
}
