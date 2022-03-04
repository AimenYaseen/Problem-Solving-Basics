#include<iostream>
using namespace std;

int main () {
    string n = "861568688536788"; int k=10000;
    string p 
    = to_string(stoll(n) * k);
    int pro = stoll(n) * k;
    cout<<pro <<endl;
    cout<<p<<endl;
    int sum = 0;
    // for(int i=1; i<=k; i++){
    //     p += n;
    // }

    do{
    //     if(p.length() == 1){
    //     return stoi(p);
    //    cout<< stoi(p);
    //     }
        for(int i=0; i<p.length(); i++){
         // int j = p[i] - '0';
          //cout<<"\n" <<j;
           sum += p[i] - '0';
        }
        p = to_string(sum);
        sum=0;
    
    } while(p.length() != 1);
    
    cout<< stoi(p);
}
