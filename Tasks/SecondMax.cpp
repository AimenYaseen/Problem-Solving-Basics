#include <iostream>

using namespace std;

int main()
{
    int arr[] = {7, 2, 3, 1, 0, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max= arr[0];
    for(int i=1; i< n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << "MAX : " << max;
    // 2nd Maximum
    int max2;
    if(max == arr[0]){
        max2=arr[1];
    } else {
        max2=arr[0];
    }

    for(int i=0; i< n; i++){
        if(arr[i] != max && arr[i] > max2){
            max2 = arr[i];
        }
    }
    cout << "MAX2 : " << max2;
    return 0;
 }
