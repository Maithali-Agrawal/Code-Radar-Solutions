#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    int bits = sizeof(int) * 8;
    int msbMask = 1 << (bits - 1);
    if (num & msbMask) {
        printf("Set");
    } else {
        printf("Not Set");
    }
    return 0;
}
