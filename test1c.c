#include <stdio.h>

int calculate_sum(int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                total += i + j + k;
            }
        }
    }
    return total;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result = calculate_sum(n);
    printf("The sum is %d\n", result);
    return 0;
}
