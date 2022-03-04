#include<iostream>
using namespace std;

int main() {
    char x= 'x';
    if(x + 3>'a'){
        x -= 26;
    }
   // x += 3;
    cout<< x;
}