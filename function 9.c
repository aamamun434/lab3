#include <stdio.h>
int A(int n1, int n2);
int main() {
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("G.C.D of %d and %d is %d.\n", n1, n2, A(n1, n2));
    return 0;
}

int A(int n1, int n2) {
    if (n2 != 0)
        return A(n2, n1 % n2);
    else
        return n1;
}

