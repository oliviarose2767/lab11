#include <string>
#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

int max(int x, int y){
  return( x > y ) ? x : y;
}

int dynEditDistance(string str1, string str2, int a, int b){
  int matrix[a+1][b+1];
  int i, j;

  for(int i = 0; i <= a; i++){
    for(int j = 0; j <= b; j++){
      if(i == 0 || j == 0){
        matrix[i][j] = 0;
      }else if(str1[i - 1] == str2[j - 1]){
        matrix[i][j] = matrix[i-1][j-1] + 1;
      }else{
        matrix[i][j] = max(matrix[i-1][j], matrix[i][j-1]);
      }
    }
  }

  return matrix[a][b];
}

int main(void){

  string bestMatch;
  int LCS;
  int bestLCS = 0;
  string bestWord;
  string temp;

  string query = "apple's";
  string txt = "the pie was made with apple and tasted like frank.txt";

  string word;
  vector<string> words;

  for(stringstream ss(txt); ss >> word;){
    words.push_back(word);
  }

  for(unsigned int i = 0; i < words.size(); i++){
    temp = words.at(i);
    LCS = dynEditDistance(query, words.at(i), query.size(), temp.size());
    if(LCS > bestLCS){
      bestLCS = LCS;
      bestWord = temp;
    }
  }



  cout << bestWord << endl;
  cout << bestLCS << endl;

  return 0;

}
