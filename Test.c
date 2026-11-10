#include <stdio.h>
int main(void) 
{   
    char Input[200];
    int Anzahl_der_Es = 0;
    printf("Gib etwas ein: ");
    scanf("%s", Input);
    printf("Du hast eingegeben: %s\n", Input);
    for (int i = 0; i < 200; i++) {
        if (Input[i] == '\0') break;
        if (Input[i] == 'E' || Input[i] == 'e') {
            Input [i] = '3';
            Anzahl_der_Es++;
            
        }
        printf("%c", Input[i]);
    }

    return 0;
}