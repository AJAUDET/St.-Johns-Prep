#include <cs50.h>
#include <stdio.h>

int main()
{
  // switch variable
    int var = get_int("0, 1, 2, 3\n");

  // switch statement
    switch (var) {
        case 1:
            printf("Case 1 is Matched.");
            break;

        case 2:
            printf("Case 2 is Matched.");
            break;

        case 3:
            printf("Case 3 is Matched.");
            break;

        default:
            printf("Default case is Matched.");
            break;
    }

    return 0;
}
