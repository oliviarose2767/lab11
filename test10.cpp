#include <sstream>
#include <string>
#include <vector>
#include <iostream>
#include <cctype>

using namespace std;

bool contains_word(string textword, vector<string> querywords){
  for(unsigned int i = 0; i < querywords.size(); i++){
    if(textword == querywords.at(i)){
      return true;
    }
  }

  return false;
}

int main(void){
  int rank = 0;
  int bestRank = 0;

  string query = "apple pie";
  string text = "the apple pie made by my mom was very good. i hope you enjoy it";

  vector<string> bestMatch;
  string txtword;
  string qword;
  vector<string> txtwords;
  vector<string> qrywords;

  //text ss
  for(stringstream ss(text); ss >> txtword;){
    txtwords.push_back(txtword);
  }

  //query ss
  for(stringstream ss2(query); ss2 >> qword;){
    qrywords.push_back(qword);
  }

  for(unsigned int i = 0; i < txtwords.size(); i++){
    if(contains_word(txtwords[i], qrywords) == true){
      bestMatch.push_back(txtwords.at(i));
      rank++;
      for(unsigned int j = 1; j < qrywords.size(); j++){
        if(contains_word(txtwords[i + j], qrywords) == false){
          if(rank > bestRank){
            bestRank = rank;
          }
        }else if(contains_word(txtwords[i+j], qrywords) == true){
          continue;
        }
      }
    }
  }

  cout << bestRank << endl;
  for(unsigned int k = 0; k < bestMatch.size(); k++){
    cout << bestMatch[k];
  }

  return 0;
}
