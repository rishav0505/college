#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

enum Direction
{
   STOP = 0,
   LEFT,
   RIGHT,
   UP,
   DOWN
};
Direction dir;
bool gameOver;
const int height = 20;
const int width = 20;
int headX, headY, fruitX, fruitY, score;
int tailx[100], taily[100];
int tail_len;

void setup();
void draw();
void input();
void logic();

int main()
{
   char start;
   cout << "\t-------------------------------" << endl;
   cout << "\t\t :Snake King:" << endl;
   cout << "\t-------------------------------" << endl;
   cout << "\tPress 's' to option: ";
   cin >> start;
   if (start == 's')
   {
      setup();
      while (!gameOver)
      {
         draw();
         input();
         logic();
         Sleep(30);
         system("cls");
      }
   }
}

void setup()
{
   gameOver = false;
   dir = STOP;
   headX = width / 2;
   headY = height / 2;
   fruitX = rand() % width;
   fruitY = rand() % height;
   score = 0;
}

void draw()
{
   system("cls");
   // Uper Border
   cout << "\t\t";
   for (int i = 0; i < width - 8; i++)
   {
      cout << "||";
   }
   cout << endl;

   // Snake, fruit, space and side borders
   for (int i = 0; i < height; i++)
   {
      for (int j = 0; j < width; j++)
      {
         // left border
         if (j == 0)
         {
            cout << "\t\t||";
         }
         // snake head
         if (i == headY && j == headX)
         {
            cout << "O";
         }
         // fruit
         else if (i == fruitY && j == fruitX)
         {
            cout << "*";
         }
         // space, snake tail
         else
         {
            bool print = false;
            // tail
            for (int k = 0; k < tail_len; k++)
            {
               if (tailx[k] == j && taily[k] == i)
               {
                  cout << "o";
                  print = true;
               }
            }
            // space
            if (!print)
            {
               cout << " ";
            }
         }
         // right border
         if (j == width - 1)
         {
            cout << "||";
         }
      }
      cout << endl;
   }
   // Lower Border
   cout << "\t\t";
   for (int i = 0; i < width - 8; i++)
   {
      cout << "||";
   }
   cout << endl;
   cout << "\t\t\tScore: " << score << endl;
}

void input()
{
   if (_kbhit())
      switch (getch())
      {
      case 'a':
         dir = LEFT;
         break;
      case 'd':
         dir = RIGHT;
         break;
      case 'w':
         dir = UP;
         break;
      case 's':
         dir = DOWN;
         break;
      default:
         break;
      }
}

void logic()
{
   // tail logic
   int prevx = tailx[0];
   int prevy = taily[0];
   int prev2x, prev2y;
   tailx[0] = headX;
   taily[0] = headY;
   for (int i = 1; i < tail_len; i++)
   {
      prev2x = tailx[i];
      prev2y = taily[i];
      tailx[i] = prevx;
      taily[i] = prevy;
      prevx = prev2x;
      prevy = prev2y;
   }

   // direction logic
   switch (dir)
   {
   case LEFT:
      headX--;
      break;
   case RIGHT:
      headX++;
      break;
   case UP:
      headY--;
      break;
   case DOWN:
      headY++;
      break;
   default:
      break;
   }

   // touch walls
   if (headX >= width)
   {
      headX = 0;
   }
   else if (headX < 0)
   {
      headX = width - 1;
   }
   if (headY >= height)
   {
      headY = 0;
   }
   else if (headY < 0)
   {
      headY = height - 1;
   }

   // snake bite itself
   for (int i = 0; i < tail_len; i++)
   {
      if (tailx[i] == headX && taily[i] == headY)
      {
         gameOver = true;
      }
   }

   // snake eat fruit
   if (headX == fruitX && headY == fruitY)
   {
      score += 10;
      fruitX = rand() % width;
      fruitY = rand() % height;
      tail_len++;
   }
}