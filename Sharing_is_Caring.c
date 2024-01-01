#include <stdio.h>
int main() {
    int N, x;
    scanf("%d%d",&N,&x);
    if (N >= x && N < (x * (x + 1)) / 2) {
        printf("NO");
    } else {
        printf("YES");
    }
    return 0;
}
