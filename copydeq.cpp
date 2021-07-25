#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d1;
    deque<int> d2;

    int arr1[5] = {2, 4, 6, 8, 10};
    int arr2[5] = {1, 3, 5, 7, 9};

    for(int i = 0; i < 5; i++){
        d1.push_back(arr1[i]);
        d2.push_back(arr2[i]);
    }

    copy(d1.begin(), d1.end(), back_inserter(d2));

    cout<<"\nd2: ";
    for(int i = 0; i < d2.size(); i++){
        cout<<d2[i]<<' ';
    }
    cout<<endl;
    return 0;
}