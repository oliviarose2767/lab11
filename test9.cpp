#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(void){

  ifstream in("test9.txt");

  string str1;
  vector<string> vec;

  while(getline(in, str1)){
    if(str1.size() > 0){
        vec.push_back(str1);
    }
  }

  unsigned int size = vec.size() / 2;

  for(unsigned int i = 0 ; i < size; i++){
    cout << vec.at(i) << endl;
  }

  vector<string> words;

  for(unsigned int j =  0; j < size; j++){
    words.push_back(vec.at(j));
  }

  for(unsigned int k = 0; k < words.size(); k++){
    cout << words.at(k) << endl;
  }

  return 0;
}
