#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void print(int j){
    cout<<j<<' ';
}



int main(){
    vector<int> v;                              //create a vector of ints

    v.push_back(10);                             //puts value at the end of array
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);

    v[0] = 20;
    v[3] = 23;

    /*for(int i = 0; i < v.size(); i++){            //loop
        cout<<v[i]<<' ';
    }*/

    for_each(v.begin(), v.end(), print);            //for_each algorithm
    cout<<endl;
    return 0;
}
