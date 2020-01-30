#include <iostream>
#include <string>
#include <cctype>

#include "add.h"
using namespace std;

int main() {

  int commandNum = 0;
  bool exit = false;
  
  cout << "Hello! Welcome to Simple Calculator.\n";

  while (!exit) {
    cout << "Please enter a number from the following commands or enter 0 to leave:\n" <<
    "1. Add \n2. subtract \n3. Multiply \n4. Divide\n";
    cin >> commandNum;


    while (commandNum <= -1 || commandNum > 4) {
      cout << "\nWrong command! Please choose another:\n" << "1. Add \n2. subtract \n3. Multiply \n4. Divide\n\n";
      cin.clear();
      cin >> commandNum;
    }

    if (commandNum == 1){
      getNumbers();
      exit = true;
    }
    else if (commandNum == 0) {
      exit = true;
    }
  }


  return 0;
}