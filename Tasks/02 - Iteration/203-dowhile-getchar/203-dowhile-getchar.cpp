#include <stdio.h>

int main()
{
    puts("Press a letter or number, then press return");
    puts("Press q or Q then return to quit");

    char userEnteredCharacter;
    char returnKey;
    

    do
    {
        userEnteredCharacter = getchar();   //ASCII character
        returnKey = getchar();              //Return key
        printf("You typed %c\n", userEnteredCharacter);
        printf("You also pressed return (ASCII %d)\n", returnKey);
		
    } while ((userEnteredCharacter !='q') && (userEnteredCharacter !='Q'));

    puts("Finished");
}
