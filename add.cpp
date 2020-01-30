#include <iostream>
#include <cctype>
using namespace std;

int add(int x, int y) {
  return x+y;
}

void getNumbers(){
  int x = 0, y = 0;
  int sum = 0;
  cout << "Please enter two numbers: \n";
  cin >> x >> y;

  if (cin){
    sum = add(x,y);
    cout << "The answer is: " << sum << "\n\n";
  }
  else {
    cout << "Those are not numbers silly.\n";
  }
  cin.clear();
  
  return;

}