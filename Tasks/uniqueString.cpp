#include <iostream>

using namespace std;

int main()
{
    // std::cout << "Hello World" << std::endl;
    string s1= "ahdoebnsgzvxjkshba";
    string s2= "hjgdsybsjdsdejsfss";
    string s3 = s1 + s2;
    char temp;
    // Sorting
    for(int i=0; i<=s3.length()-1; i++){
       for(int j=i+1; j<=s3.length()-1; j++){
           if(s3[i]!=s3[j]){
                if(s3[i]>s3[j]){
              temp = s3[i];
              s3[i] = s3[j];
              s3[j] = temp;
           }
           } 
       }
    }
    char *arr = new char(1);
    arr[0]=s3[0];
    int j=0;
    //unique elements in arr
    for(int i=0; i<=s3.length(); i++){
        if(arr[j] != s3[i]){
            j++;
            arr[j]=s3[i];
        }
    }
    cout<<"Unique String:" << endl <<s3;
    cout << arr << endl;
    return 0;
}