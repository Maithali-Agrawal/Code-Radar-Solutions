#include <stdio.h>
int main() {
    int num, n, bitValue;
    scanf("%d", &num);
    scanf("%d", &n);
    if (n < 0 || n >= (sizeof(int) * 8)) {
        printf("Invalid bit position!\n");
        return 1;
    }
    bitValue = (num >> n) & 1;
    printf("%d\n", n, bitValue);
    return 0;
}
