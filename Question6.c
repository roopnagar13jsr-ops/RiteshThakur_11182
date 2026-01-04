#include <stdio.h>

int main() {
    int a, b, ritesh;

    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);
    
   ritesh = a;
    a = b;
    b = ritesh;

    printf("After swapping the number:\n");
    printf("a = %d\n",a);
    printf("b = %d",b);

    return 0;
}
