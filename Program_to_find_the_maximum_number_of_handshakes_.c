#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int totalHandshakes = (n * (n - 1)) / 2;
    printf("%d
", totalHandshakes);
    return 0;
}
