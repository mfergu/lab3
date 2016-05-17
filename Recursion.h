#ifndef Recursion_h
#define Recursion_h
#include <iostream>
#include <fstream>
#include <string>

class Recursion
{
  public:
    Recursion();
    Recursion(const char* ); //read a file into the array
    void printArr(); //displays the 2-d arr
    void islandFinder(int row, int col); //money maker
    void printGroups(); //find and print groups 
    ~Recursion();
  private:
    enum { size=10};
    int intArr[10][10]; //int array to hold read in
    bool boolArr[10][10]; //for housekeeping 
    
};

#endif
    
