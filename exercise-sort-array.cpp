#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    float arr[] = {4.55, 8.666, 3.556, 55.55, 2.66};

    sort(arr, arr+5);

    for(int i = 0; i < 5; i++){
        cout<< arr[i]<< ' ';
    }

    return 0;
    
}