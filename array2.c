#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the size of the first array: ");
    scanf("%d", &a);

    int c[a];
    
    printf("Enter %d elements for the first array:\n", a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &c[i]);  
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &b);

    int d[b];
    
    printf("Enter %d elements for the second array:\n", b);
    for (int i = 0; i < b; i++) {
        scanf("%d", &d[i]);
    }

    int merge[a + b];

    for (int i = 0; i <a; i++) {
        merge[i] = c[i];
    }
    for (int i = 0; i < b; i++) {
        merge[a + i] = d[i];
    }

    printf("Merged Array:\n");
    for (int i = 0; i < a + b; i++) {
        printf("%d ", merge[i]);
    }

    return 0;
}