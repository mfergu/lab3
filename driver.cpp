#include "Recursion.h"
using namespace std;

int main () //int argc, char* argv
{
  Recursion A("sample.txt");
  A.printArr();
  cout << "\n\n recursive algo\n";
  A.printGroups();
  
  return 0;
}

