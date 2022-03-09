#include<iostream>

using namespace std;

int main () {
   string str = "This is an example!";
    //string str = "double  spaces";
 // int index=0;
  int start=0;
  int end=0;
  for(int i=0; i<str.length(); i++){
    if(str[i] == ' ' || i == str.length() -1){
      i == str.length() -1 ? start=i : start=i-1;
      for(int j=start; j>=end; j--){
        cout<< str[j];
        //str2 += str[j];
        //index++;
      }
      cout<<" ";
      end=i+1;
    }
  }
//   cout<< str2;
  return 0;
}