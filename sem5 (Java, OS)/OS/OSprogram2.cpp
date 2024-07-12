#include <iostream>
#include <sys/types.h>
#include <unistd.h>
using namespace std;

int main()
{
  int x = 5;
  if (fork() == 0)
  {
    x = 10;
    cout << "Child process: Value of x = " << x << endl;
  }
  else
    cout << "Parent process: Value of x = " << x << endl;
  return 0;
}
