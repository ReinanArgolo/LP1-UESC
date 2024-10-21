#include <stdio.h>

int main() {
    int n, rslt;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        rslt = i * i - 1;
        printf("%d ", rslt);
    }
}