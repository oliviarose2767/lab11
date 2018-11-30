#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void){

  string str1 = "oLiViAaaaaa";
  string str2 = "olivia";

  transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
  transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

  // if(str1.compare(str2) == 0){
  //   cout << "it equaled 0" << endl;
  // }

  int stringreturn = 0;

  stringreturn = str1.compare(str2);

  cout << stringreturn << endl;

  return 0;
}
