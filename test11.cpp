#include <string>
#include <iostream>

using namespace std;

string remove_punctuation(string str){

  for(unsigned int i = 0, len = str.size(); i < len; i++){
    if(ispunct(str[i])){
      str.erase(i--, 1);
      len = str.size();
    }
  }

  return str;
}

int main(void){
  string str = "Olivia's favorite cla$$ i$ 2120";
  cout << str << endl;
  string newstr = remove_punctuation(str);

  cout << newstr << endl;
}
