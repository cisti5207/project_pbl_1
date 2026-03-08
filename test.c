#include <stdio.h>
#include <string.h>

int main() {

    char s[] = "hoàng";
    int i = 0, count = 0;
    while (s[i] != '\0') {
        if ((s[i++] & 0xC0) != 0x80) count++;
        printf ("%d - %d\n", i - 1, count);
    }
    printf ("%d", count);

    
    
    return 0;
}