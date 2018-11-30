#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void){

  string string1 = "OLIVIA";

  cout << string1 << endl;

  transform(string1.begin(), string1.end(), string1.begin(), ::tolower);

  cout << string1 << endl;

  return 0;
}
