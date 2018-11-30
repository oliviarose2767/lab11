#include <string>
#include <iostream>

using namespace std;

int main(void){

  string str1 = "Olivia.txt";

  cout << str1 << endl;

  //str1.erase(str1.end()-4);

  for(unsigned int i = 0; i < 4; i++){
    str1.pop_back();
  }

  cout << str1 << endl;

  return 0;
}
