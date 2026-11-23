#include <stdio.h>
                
int main(void) {
    int a = 10;
    int b = 5;

    printf("=== Simple Calculator ===\n");
    printf("a = %d, b = %d\n", a, b);
    printf("和: %d + %d = %d\n", a, b, a + b);
    printf("差: %d - %d = %d\n", a, b, a - b);
    printf("積: %d * %d = %d\n", a, b, a * b);
    printf("商: %d / %d = %d\n", a, b, a / b);
    printf("剰余: %d %% %d = %d\n", a, b, a % b);
    printf("=== Calculation End ===\n");

    return 0;
}
