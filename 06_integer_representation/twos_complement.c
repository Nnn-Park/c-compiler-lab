#include <stdio.h>
#include <stdint.h>

int main() {
    int x = -151;
    printf("x = %d\n", x);
    
    uint32_t raw = *(uint32_t*)&x;
    printf("raw bits = 0x%08X\n", raw);

    return 0;
}