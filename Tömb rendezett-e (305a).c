#include <stdio.h>
#include <stdbool.h>

const int TOMB_MERET = 6;

int rendezett(int tomb[]) {
    bool rendez;
    if (TOMB_MERET == 0) rendez = true;
    else {
        for (int i = 0; i < TOMB_MERET; i++) {
            if (tomb[i] < tomb[i + 1])
                rendez = true;
            else {
                rendez = false;
                break;
            }
        }
    }
    return rendez;
}

int main()
{
    int tomb[] = {20, 22, 50, 60, 70, 71};
    if (rendezett(tomb)) printf("A tomb rendezett.\n");
    else printf("A tomb nem rendezett.\n");
}