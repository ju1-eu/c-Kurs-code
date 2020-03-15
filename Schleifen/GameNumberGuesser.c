/* 
	ju 8-Mrz-20 GameNumberGuesser.c
    Errate die richtige Zahl aus dem Intervall [1, 20],  
    um dieses Spiel zu gewinnen!
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n_rounds = 5;
    int i = 0;
    int zufallszahl = rand();        // [0, RAND_MAX]
    zufallszahl = zufallszahl % 20;  // [0, 19]
    zufallszahl++;                   // [1, 20] zufallszahlen von 1 - 20
    int selection;

    printf("little game!\n");
    printf("Errate die richtige Zahl aus dem Intervall [1, 20], " 
           "um dieses Spiel zu gewinnen!\n");

    do
    {
        printf("Eingabe Ganzzahl [1, 20]\n");
        scanf("%d", &selection);

        if ((selection > 20) || (selection < 1))
        {
            printf("Keine gueltige Zahl!\nWiederhole! Noch %d Versuche!\n\n", n_rounds - (i + 1));
            i++;
            continue;
        }

        if (selection == zufallszahl)
        {
            printf("korrekt!\n");
            break;
        }
        else if (selection < zufallszahl)
        {
            printf("Nicht korrekt, die richtige Zahl ist groeßer!\nWiederhole! Noch %d Versuche!\n\n", n_rounds - (i + 1));
        }
        else if (selection > zufallszahl)
        {
            printf("Nicht korrekt, die richtige Zahl ist kleiner!\nWiederhole! Noch %d Versuche!\n\n", n_rounds - (i + 1));
        }

        i++;

    } while (i < n_rounds);

    return 0;
}