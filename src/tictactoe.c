#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void PrintTicTacToeTable();
void CheckSymbol();
void AlreadyWrittenExceptionMessage();
void PrintFirstPlayerWin();
void PrintSecondPlayerWin();

// Symbols (X-0)
char symbol_00 = ' ';
char symbol_01 = ' ';
char symbol_02 = ' ';
char symbol_10 = ' ';
char symbol_11 = ' ';
char symbol_12 = ' ';
char symbol_20 = ' ';
char symbol_21 = ' ';
char symbol_22 = ' ';

// User Input
char selectedArea[3];
char userSymbol;
int userValue = 0;
bool validPlay;

int main()
{

      do
      {
            PrintTicTacToeTable();

            printf("Which Area --> ");
            scanf("%s", &selectedArea);

            printf("\n");

            userSymbol = (userValue % 2 == 0) ? 'X' : 'O';

            CheckSymbol();

            if (symbol_00 == 'X' && symbol_01 == 'X' && symbol_02 == 'X')
            {
                  PrintFirstPlayerWin();
                  break;
            }
            else if (symbol_10 == 'X' && symbol_11 == 'X' && symbol_12 == 'X')
            {
                  PrintFirstPlayerWin();
                  break;
            }
            else if (symbol_20 == 'X' && symbol_21 == 'X' && symbol_22 == 'X')
            {
                  PrintFirstPlayerWin();
                  break;
            }
            else if (symbol_00 == 'X' && symbol_11 == 'X' && symbol_22 == 'X')
            {
                  PrintFirstPlayerWin();
                  break;
            }
            else if (symbol_02 == 'X' && symbol_11 == 'X' && symbol_20 == 'X')
            {
                  PrintFirstPlayerWin();
                  break;
            }
            else if (symbol_00 == 'X' && symbol_10 == 'X' && symbol_20 == 'X')
            {
                  PrintFirstPlayerWin();
                  break;
            }
            else if (symbol_01 == 'X' && symbol_11 == 'X' && symbol_21 == 'X')
            {
                  PrintFirstPlayerWin();
                  break;
            }
            else if (symbol_02 == 'X' && symbol_12 == 'X' && symbol_22 == 'X')
            {
                  PrintFirstPlayerWin();
                  break;
            }
            else if (symbol_00 == 'O' && symbol_01 == 'O' && symbol_02 == 'O')
            {
                  PrintSecondPlayerWin();
                  break;
            }
            else if (symbol_10 == 'O' && symbol_11 == 'O' && symbol_12 == 'O')
            {
                  PrintSecondPlayerWin();
                  break;
            }
            else if (symbol_20 == 'O' && symbol_21 == 'O' && symbol_22 == 'O')
            {
                  PrintSecondPlayerWin();
                  break;
            }
            else if (symbol_00 == 'O' && symbol_11 == 'O' && symbol_22 == 'O')
            {
                  PrintSecondPlayerWin();
                  break;
            }
            else if (symbol_02 == 'O' && symbol_11 == 'O' && symbol_20 == 'O')
            {
                  PrintSecondPlayerWin();
                  break;
            }
            else if (symbol_00 == 'O' && symbol_10 == 'O' && symbol_20 == 'O')
            {
                  PrintSecondPlayerWin();
                  break;
            }
            else if (symbol_01 == 'O' && symbol_11 == 'O' && symbol_21 == 'O')
            {
                  PrintSecondPlayerWin();
                  break;
            }
            else if (symbol_02 == 'O' && symbol_12 == 'O' && symbol_22 == 'O')
            {
                  PrintSecondPlayerWin();
                  break;
            }

            if (validPlay)
            {
                  userValue++;
            }
      } while (true && userValue != 9);

      PrintTicTacToeTable();

      printf("|---------------|\n");
      printf("| Game Finished |\n");
      printf("|---------------|\n\n");
      
      return 0;
}

void PrintTicTacToeTable()
{
      printf("|-----------------|\n");
      printf("|  %c  |  %c  |  %c  |\n", symbol_00, symbol_01, symbol_02);
      printf("|-----------------|\n");
      printf("|  %c  |  %c  |  %c  |\n", symbol_10, symbol_11, symbol_12);
      printf("|-----------------|\n");
      printf("|  %c  |  %c  |  %c  |\n", symbol_20, symbol_21, symbol_22);
      printf("|-----------------|\n\n");
}

void CheckSymbol()
{
      if (strcmp(selectedArea, "00") == 0)
      {
            if (symbol_00 == ' ')
            {
                  symbol_00 = userSymbol;
                  validPlay = true;
            }
            else
            {
                  AlreadyWrittenExceptionMessage();
            }
      }
      else if (strcmp(selectedArea, "01") == 0)
      {
            if (symbol_01 == ' ')
            {
                  symbol_01 = userSymbol;
                  validPlay = true;
            }
            else
            {
                  AlreadyWrittenExceptionMessage();
            }
      }
      else if (strcmp(selectedArea, "02") == 0)
      {
            if (symbol_02 == ' ')
            {
                  symbol_02 = userSymbol;
                  validPlay = true;
            }
            else
            {
                  AlreadyWrittenExceptionMessage();
            }
      }
      else if (strcmp(selectedArea, "10") == 0)
      {
            if (symbol_10 == ' ')
            {
                  symbol_10 = userSymbol;
                  validPlay = true;
            }
            else
            {
                  AlreadyWrittenExceptionMessage();
            }
      }
      else if (strcmp(selectedArea, "11") == 0)
      {
            if (symbol_11 == ' ')
            {
                  symbol_11 = userSymbol;
                  validPlay = true;
            }
            else
            {
                  AlreadyWrittenExceptionMessage();
            }
      }
      else if (strcmp(selectedArea, "12") == 0)
      {
            if (symbol_12 == ' ')
            {
                  symbol_12 = userSymbol;
            }
            else
            {
                  AlreadyWrittenExceptionMessage();
            }
      }
      else if (strcmp(selectedArea, "20") == 0)
      {
            if (symbol_20 == ' ')
            {
                  symbol_20 = userSymbol;
            }
            else
            {
                  AlreadyWrittenExceptionMessage();
            }
      }
      else if (strcmp(selectedArea, "21") == 0)
      {
            if (symbol_21 == ' ')
            {
                  symbol_21 = userSymbol;
            }
            else
            {
                  AlreadyWrittenExceptionMessage();
            }
      }
      else if (strcmp(selectedArea, "22") == 0)
      {
            if (symbol_22 == ' ')
            {
                  symbol_22 = userSymbol;
            }
            else 
            {
                  AlreadyWrittenExceptionMessage();
            }
      }
      else
      {
            printf("|---------------------|\n");
            printf("| Invalid Area Choice |\n");
            printf("|---------------------|\n\n");
            validPlay = false;
      }
}

void AlreadyWrittenExceptionMessage()
{
      printf("|----------------------|\n");
      printf("| It's Already Written |\n");
      printf("|----------------------|\n\n");
      validPlay = false;
}

void PrintFirstPlayerWin()
{
      PrintTicTacToeTable();

      printf("|--------------|\n");
      printf("| Player 1 Win |\n");
      printf("|--------------|\n\n");
}

void PrintSecondPlayerWin()
{
      PrintTicTacToeTable();

      printf("|--------------|\n");
      printf("| Player 2 Win |\n");
      printf("|--------------|\n\n");
}