#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;
  if (fork() == 0)
  {
    // child process
    if (n % 2 == 0)
      cout << "Child process prints the next even number: " << n + 2 << endl;
    else
      cout << "Child process prints the next even number: " << n + 1 << endl;
  }
  else
  {
    // parent process
    if (n % 2 == 0)
      cout << "Parent process prints the next odd number: " << n + 1 << endl;
    else
      cout << "Parent process prints the next odd number: " << n + 2 << endl;
  }
  return 0;
}
