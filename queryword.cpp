#include <string>
#include <iostream>

using namespace std;

string isWordOrPhrase(string query){
  string wordOrPhrase = "word";
  unsigned int start = 0;
  unsigned int i = 0;
  char lastCharacter;

  /*
   *  Is it a word?
   *  Case 1 - "apple" no whitespaces
   *  Case 2 - "apple " word followed by unecessary whitespace
   *  Case 3 - " apple" extra whitespace up front
   */
   while(query[i] == ' '){
     i++;
     start = i;
   }


   for(unsigned int i = start; i < query.size(); i++){
     cout << query[i] << endl;
     if(query[i] == ' '){
       while((i < query.size()) && (query[i] == ' ')){
         i++;
         lastCharacter = query[i];
         cout << lastCharacter << endl;
       }
       if(lastCharacter == ' '){
         wordOrPhrase = "word";
       }else{
         wordOrPhrase = "phrase";
       }
     }
   }

  return wordOrPhrase;
}

int main(void){

  string str1 = "i love apples ";
  string str2 = "    apple";
  string whatisstr1;
  string whatisstr2;

  whatisstr1 = isWordOrPhrase(str1);
  whatisstr2 = isWordOrPhrase(str2);

  cout << "string 1 is a " << whatisstr1 << endl;
  cout << "string 2 is a " << whatisstr2 << endl;

  return 0;

}
