#include <stdio.h>
int main(void) 
{   
    char Input[200];
    printf("Gib etwas ein: ");
    scanf("%s", Input);
    printf("Du hast eingegeben: %s\n", Input);
    for (int i = 0; i < 200; i++) {
        if (Input[i] == '\0') break;
        printf("Zeichen %d: %c\n", i, Input[i]);
    }

    return 0;
}