#include  <stdio.h>
#include <stdlib.h>
#include <string.h>

int i, j, mist = 0, wordcount, flag = 0, key = 0;
char word[100], guessword[100], letter, replay;

void mistlist()
{
    if (mist == 1)

    {

        printf("  +---+\n");
        printf("  |   |\n");
        printf("  O   |\n");
        printf("      |\n");
        printf("      |\n");
        printf("      |\n");

        printf("=========\n");

    }

    else if (mist == 2)
    {


        printf("  +---+\n");
        printf("  |   |\n");
        printf("  O   |\n");
        printf("  |   |\n");
        printf("      |\n");
        printf("      |\n");
        printf("      |\n");

        printf("=========\n");

    }


    else if (mist == 3)
    {

        printf("  +---+\n");
        printf("  |   |\n");
        printf("  O   |\n");
        printf(" /|    |\n");
        printf("      |\n");
        printf("      |\n");
        printf("      |\n");

        printf("=========\n");

    }

    else if (mist == 4)
    {

        printf("  +---+\n");
        printf("  |   |\n");
        printf("  O   |\n");
        printf(" /|\\ |\n");
        printf("      |\n");
        printf("      |\n");
        printf("      |\n");

        printf("=========\n");

    }

    else if (mist == 5)
    {

        printf("  +---+\n");
        printf("  |   |\n");
        printf("  O   |\n");
        printf(" /|\\  |\n");
        printf(" /    |\n");
        printf("      |\n");
        printf("      |\n");

        printf("=========\n");

    }

    else if (mist == 6)
    {
        printf("  +---+\n");
        printf("  |   |\n");
        printf("  O   |\n");
        printf(" /|\\  |\n");
        printf(" / \\  |\n");
        printf("      |\n");
        printf("      |\n");

        printf("=========\n");

    }



}

void DefineShowGuessWord()
{
    for (i = 0; i < wordcount; i++)
        guessword[i] = '*';
     guessword[wordcount] = '\0';
}

void ShowGuessWord()
{
    printf("CURRENT PROGRESS.\n");
    for (i = 0; i < wordcount; i++)
        printf("%c ", guessword[i]);
    printf("\n");
}

void selector()
{
    printf("ENTER THE WORD 'SELECTOR' : ");
    fgets(word, 100, stdin);
    for (i = 0; i < 100; i++)
    {
        if (word[i] == '\n')
        {
            word[i] = '\0';
            break;
        }
    }
    wordcount = strlen(word);
    system("cls");
}

void guesser()
{
    printf("-----------------------------------------\n");
    printf("ENTER THE LETTER 'GUESSER': ");
    scanf(" %c", & letter);
}

void checker()
{
    flag = 0;
    for (i = 0; i < wordcount; i++)
    {
        if (letter == word[i])
        {
            guessword[i] = letter;
            flag = 1;
        }
    }
    ShowGuessWord();
    if (flag == 0)
    {
        printf("NOPE! WRONG GUESS. \n");
        mist++;
        mistlist();
        printf("REMAINING LIVES : %d\n", 6 - mist);
    }

}

void compare()
{
    key = 0;
    for (j = 0; j < wordcount; j++)
        if (word[j] == guessword[j])
            key++;

}


void hangman()
{
    key = 0;
    mist = 0;
    flag = 0;
    selector();
    printf("THE WORD TO BE GUESSED IS OF LENGTH %d.\n", wordcount);
    DefineShowGuessWord();
    ShowGuessWord();

    while (mist < 6)
    {
        guesser();
        checker();
        compare();
        if (key == wordcount)
        {
            printf("GUESSED CORRECT! GUESSER WON!!\n");
            printf("HANGMAN ALIVE & SET FREE!\n");
            printf("  O   |\n");
            printf(" /|\\  |\n");
            printf(" / \\  |\n");
            printf("=========\n");

            break;
        }
    }

    if (mist == 6)
    {
        printf("\nSORRY GAME ENDS!! HANGMAN DIED BY HANGING.\n");
        printf("CORRECT WORD WAS: %s\n", word);
    }



    printf("ANOTHER? : y/n");
    scanf(" %c", & replay);
    while (replay != 'y' && replay != 'n')
    {
        printf("ANOTHER(y/n)? : ");
        scanf(" %c", & replay);
    }



}
int main()
{
    printf("A SIMPLE NON-GRAPHIC HANGMAN.\n");
    printf("Made by Giridhar.\n");

    do {
         hangman();
       }
    while (replay == 'y');
    printf("BYE BYE!!");

    return 0;
}
