#include <stdio.h>

int min(int n, int d, int b[]) {
    int moves = 0;
    
    for (int i = 1; i < n; i++) {
        if (b[i] <= b[i - 1]) {
            int increment = (b[i - 1] - b[i]) + 1;
            int count = (increment + d - 1) / d;
            b[i] += count * d;
            moves += count;
        }
    }
    
    return moves;
}

int main() {
    int n, d;
    scanf("%d %d", &n, &d);
    
    int b[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    int result = min(n, d, b);
    printf("%d\n", result);    
    return 0;
}

