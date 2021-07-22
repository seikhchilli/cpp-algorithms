#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int arr[] = {100, 110, 120, 130};

    vector<int> v(arr, arr+4);

    cout<<"\nBefore insertion: ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }

    v.insert(v.begin()+2, 115);                         //insert 115 at element 2

    cout <<" \nAfter insertion: ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }

    v.erase(v.begin()+2);

    cout << "\nAfter erasure: ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }

    cout << endl;
    return 0;

}