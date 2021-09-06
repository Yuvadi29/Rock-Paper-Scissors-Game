#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    //srand(time(NULL)); //srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}
//Create Rock, Paper & Scissors Game
// Player 1: rock
// Player 2 (computer): scissors -->player 1 gets 1 point

// rock vs scissors - rock wins
// paper vs scissors - scissors wins
// paper vs rock - paper wins
// Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
// Notes: You have to display name of the player during the game. Take users name as an input from the user.
int greater(char char1, char char2)
{
    //Retursn 1 if c1>c2 and 0 otherwise. If c1==c2 it will return -1
    if (char1 == char2)
    {
        return -1;
    }
    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }
    else if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if ((char2 == 'p') && (char1 == 'r'))
    {
        return 0;
    }

    if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
}
int main()
{
    int compScore = 0;
    char compChar;
    srand(time(NULL));
    int temp;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to the game of Rock,Paper and Scissors!!!\n");
    int choice;
    printf("Choose which game to play:\n1]-Player vs Player\n2]-CPU vs Player\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:;
        int player1Score = 0, player2Score = 0, choose;
        char player1Char, player2Char;
        printf("Player 1's Turn:\n");
        printf("Choose 1 for rock, 2 for Paper and 3 for Scissors\n");
        scanf("%d", &choose);
        player1Char = dict[temp - 1];
        printf("You entered %c\n", player1Char);
        printf("Player 2's Turn:\n");
        printf("Choose 1 for rock, 2 for Paper and 3 for Scissors\n");
        scanf("%d", &choose);
        player2Char = dict[temp - 1];
        printf("You entered %c\n", player2Char);
        if (greater(player1Char, player2Char) == 1)
        {
            player1Char += 1;
            printf("PLAYER 1 WINS THIS ROUND!!");
        }
        else if (greater(player1Char, player2Char) == -1)
        {
            player1Score += 1;
            player2Score += 1;
            printf("DRAW MATCH\n");
        }
        else
        {
            player2Score += 1;
            printf("PLAYER 2 WINS THIS ROUND!!");
        }
        printf("Player 1 won %d rounds\nPlayer 2 won %d rounds\n", player1Score, player2Score);
        if (player1Score > player2Score)
        {
            printf("PLAYER 1 WIN!!!!!!");
        }
        else if (player1Score < player2Score)
        {
            printf("PLAYER 2 WINS!!!!!");
        }
        else
        {
            printf("DRAW MATCH!!!!!");
        }
        break;
        
    case 2: ;
        int compScore = 0, temp;
        char compChar;
        printf("Player 1's Turn:\n");
        printf("Choose 1 for rock, 2 for Paper and 3 for Scissors\n");
        getchar();
        player1Char = dict[temp - 1];
        printf("You entered %c\n", player1Char);

        printf("Computer's Turn:\n");
        temp = generateRandomNumber(3) + 1;
        compChar = dict[temp - 1];
        printf("Computer choosed %c\n", compChar);

        if (greater(compChar, player1Char) == 1)
        {
            compScore += 1;
            printf("CPU WINS THIS ROUND!!");
        }
        else if (greater(compChar, player1Char) == -1)
        {
            compScore += 1;
            player1Score += 1;
            printf("DRAW MATCH\n");
        }
        else
        {
            player1Score += 1;
            printf("YOU WIN THIS ROUND!!");
        }
        printf("You won %d rounds\nCPU won %d rounds\n", player1Score, compScore);
        if (player1Score > compScore)
        {
            printf("PLAYER 1 WIN!!!!!!");
        }
        else if (player1Score < compScore)
        {
            printf("CPU WINS!!!!!");
        }
        else
        {
            printf("DRAW MATCH!!!!!");
        }
    default:
        printf("INVALID INPUT");
        break;
    }

    return 0;
}