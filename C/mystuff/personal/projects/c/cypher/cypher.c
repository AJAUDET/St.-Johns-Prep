#include <stdio.h>

int main(void)
{
    char array[100];
    int i, j, k, o;

    printf("Enter a message: \n");
    fgets(array, 100, stdin);
    printf("Choose an option: \n *1: Encrypt\n *2: Decrypt\n");
    scanf("%d", &o);
    switch (o)
    {
        case 1:
            for (i = 0; i < 100 && array[i] != '\0'; i++)
            {
                if (array[i] == ' ')
                {
                    continue;
                }
                array[i] = array[i] + 3;
            }
            printf("%s\n", array);
            break;

        case 2:
            for (j = 0; j < 100 && array[j] != '\0'; j++)
            {
                if (array[j] == ' ')
                {
                    continue;
                }
                array[j] = array[j] - 3;
            }
            printf("%s\n", array);
            break;

        default:
            printf("Error\n");
    }
}
