#include<iostream>
using namespace std;

int main (){
string input= "Ciphering.";
int k=42;
k=k%26;
if(k==0){
    cout<< input;
} else {
    char temp= ' ';
for(int i=0; i<input.size(); i++){
    if(input[i] >= 'a' && input[i] <= 'z' || input[i] >= 'A' && input[i] <= 'Z'){
        temp=input[i];
        cout<< "\ntello " << temp;
        //temp += k;
        if(temp + k > 'z' || temp + k >'Z'){
        // //   for(int j=1; j<=k; j++){
        // //       cout<<endl << input[i] <<endl;
        // //      if(input[i] == 'z' || input[i] == 'Z'){
        // //          input[i] == 'z' ? input[i]='a' : input[i]='A';
        // //          cout<< "  a | A is here  " << input[i];
        // //          continue;
        // //      }
        // //      ++input[i];
        // //      cout<< input[i];
        //   }   
            input[i] -= 26;
        }
            input[i] += k;
       // temp = " ";
    }
    cout<< "  " << input[i];
}
cout<<endl<< input;
}

}
