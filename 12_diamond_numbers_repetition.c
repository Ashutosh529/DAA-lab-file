
#include <stdio.h>
int main() {
    int n = 4;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++)
            printf(" ");
        for (int j = 1; j <= (2 * i - 1); j++)
            printf("%d", i);
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--)
            printf(" ");
        for (int j = 1; j <= (2 * i - 1); j++)
            printf("%d", i);
        printf("\n");
    }
    return 0;
}
