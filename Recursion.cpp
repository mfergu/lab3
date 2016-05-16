#include "Recursion.h"
using namespace std;

Recursion::Recursion()
{}

Recursion::Recursion( const char* fileName)
{
  fstream inFile; 
  inFile.open(fileName, ios::in); 
  
  if(!inFile)
    cout << fileName << " " << "failed to open\n";

  string line;
  int x = 0, y = 0;

  while( getline( inFile, line))
  {
    while(x != 0)
    {
      intArr[x][y] = line[x]; 
      cout << intArr[x][y] << " "; 
      ++x;
    }
  cout << endl;
  ++y;
  }
}

void Recursion::printArr()
{
  cout << endl;

  int x = 0, y = 0;

  while(y!=10)
  {
    while(x != 10)
    {
      cout << static_cast<char>(intArr[x][y]) << " "; 
      ++x;
    }
  ++y;
  cout << endl;
  }
  cout << endl;
}

Recursion::~Recursion()
{
  cout << "destructor\n";
}

