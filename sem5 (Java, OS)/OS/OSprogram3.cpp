#include <iostream>
#include <sys/types.h>
#include <unistd.h>
using namespace std;

int main()
{
  cout << "Hello from Parent process" << endl;
  fork();
  cout << "Hello from Parent / Child process" << endl;
  fork();
  cout << "Hello from Child process" << endl;
  return 0;
}
