#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && a <= c) {
        printf("A is smallest");
    }
    else if (b <= a && b <= c) {
        printf("B is smallest");
    }
    else {
        printf("C is smallest");
    }

    return 0;
}