// swap variables exercise
#include <iostream>

using namespace std;


int main(){
  int a = 1;  // apples 
  int b = 2;  // oranges 
  int temp = a;
  a = b;
  b = temp; 

  std::cout << a; 
  return 0; 
}    