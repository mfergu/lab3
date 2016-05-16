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
    ~Recursion();
  private:
    int intArr[10][10]; //int array to hold read in
    
};

#endif
    
