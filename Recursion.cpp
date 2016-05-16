#include "Recursion.h"
using namespace std;

Recursion::Recursion()
{}

Recursion::Recursion( char* fileName)
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
      ++x;
    }
  ++y;
  }
}

Recursion::~Recursion()
{
  cout << "desctructor\n";
}

