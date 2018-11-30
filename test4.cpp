#include <string>
#include <iostream>

using namespace std;

bool case_insensitive_cmp(string firstString, string secondString){
  bool isSame = false;

  cout << firstString.size() << endl;
  cout << secondString.size() << endl;

  if(firstString.size() == secondString.size()){
    for(unsigned int i = 0; i < firstString.size(); i++){
      if(firstString[i] == secondString[i]){
        isSame = true;
      }else{
        isSame = false;
        break;
      }
    }
  }

  return isSame;
}

int main(void){

  string str1 = "OLIVIA";
  string str2 = "olivia";
  bool result = 0;

  result = case_insensitive_cmp(str1, str2);

  if(result == 0){
    cout << "false, not same" << endl;
  }else{
    cout << "same" << endl;
  }

  return 0;
}
