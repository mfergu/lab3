#include "Recursion.h"
using namespace std;

Recursion::Recursion()
{}

//read in the file 
Recursion::Recursion( const char* fileName)
{
  fstream inFile; 
  inFile.open(fileName, ios::in); 
  
  if(!inFile)
    cout << fileName << " " << "failed to open\n";

  string line;
  int x = 0, y = 0;

  //fills the bool and int arr
  while( getline( inFile, line))
  {
    for(x=0; x<10; x++)
    {
      if(line[x]!='.')
      {
        intArr[x][y] = 1; 
      }
      else
      {
        intArr[x][y] = 0;
      }

      boolArr[x][y] = false;
      cout << intArr[x][y] << ' ';
    }
  ++y;
  cout << endl;
  }
}

//for boolArr or intArr
void Recursion::printArr()
{
  cout << endl;
  for(int y=0; y<10; y++)
  {
    for(int x=0; x<10; x++)
    {
      cout << boolArr[x][y] << ' ';
    }
  cout << endl;
  }
}

void Recursion::islandFinder(int x, int y)
{
  cout << "(" <<  x << "," << y << ")";
  boolArr[x][y] = 1;
  if(( intArr[x][y-1] == 1) && (boolArr[x][y-1] == 0) &&\
    (y-1 > 0))
    islandFinder(x, y-1);
  if(( intArr[x-1][y] == 1) && ( boolArr[x-1][y] == 0) &&\
    (x-1 > 0))
    islandFinder(x-1, y);
  if(( intArr[x+1][y] == 1) && ( boolArr[x+1][y] == 0) &&\
    (x+1 < 9))
    islandFinder(x+1, y);
  if(( intArr[x][y+1] == 1) && ( boolArr[x][y+1] == 0) &&\
    (y+1 < 9))
    islandFinder(x, y+1);

}
  
void Recursion::printGroups()
{
  int group = 0;
  for(int y = 0; y < 10; ++y)
  {
//    cout << "\nfirst loop\n";
    for(int x = 0; x < 10; ++x)
    {
      if(intArr[x][y] == 1 && boolArr[x][y] == 0)
      {
        cout << "group"<< group << ":" ;
        islandFinder(x, y);  
        
        group++;
      }
    }
  }
}
  
Recursion::~Recursion()
{
  
  cout << "\ndestructor\n";
}

