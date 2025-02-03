/*
    prompt.c

    The goal of this program is to create a prompt generator
*/

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char ships[] = {"LightCanon", "Ladybug", "WhiteRose", "Milk & Cookies", "Cookies & Cream", "SonicBoom", "BronSeele", "KafStel", "Nuts & Dolts", "WenClair", "KronFau", "KronBae", "BaeRys", "TakoTori", "TakaMori", "InAme", "AmeSame", "InAmeSame", "HOLOMYTH", "KronMei", "CouncilRys"};

int main(void)
{
    int size = 21;

    srand(time(NULL));
    int ship_num = rand() % size;
    printf("Look up %s\n", ships[ship_num]);
}

