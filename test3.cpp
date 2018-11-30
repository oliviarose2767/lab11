#include <iostream>
#include <string>

using namespace std;

int main(void){

  string str1 = "My name is Olivia";
  string str2 = "OLIVIA";

  cout << "str1 is " << str1 << " and str2 is " << str2 << endl;

  size_t found = str1.find(str2);

  if(found != string::npos){
    cout << "query found at: " << found << endl; 
  }

  return 0;
}
