#include <stdio.h>

int main()
{
    //Create a variable x
    int x = 0;
    float y = 0;

    //Prompt user
    printf("Enter your age\n");

    //Read keyboard response - look for an integer
    int found = scanf_s("%d", &x);

    //Display how many items were matched
    printf("Matched %d items\n", found);

    //Display what was typed in
    printf("x = %d\n", x);

    printf("Enter your lucky number\n");
    int find = scanf_s("%f", &y);
    printf("Matched %d items\n", find);
    printf("y = %.0f\n", y);

	printf("The average of %d and %.0f is %.1f\n", x, y, (x + y) / 2);
}


