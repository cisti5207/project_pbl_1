#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    FILE *f = fopen("du_lieu_truyen.doc", "r");

    int c;
    while ((c = fgetc(f)) != EOF) printf ("%c", c);

    return 0;
}