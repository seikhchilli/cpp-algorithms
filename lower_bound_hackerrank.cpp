#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> int_vect(n);
    
    for(int i = 0; i < n; i++){
        cin>>int_vect[i];

    }
    int query;
    cin>>query;
    vector<int>::iterator iter;
    
    for(int i = 0; i < query; i++){
        int search_int;
        cin>>search_int;
        iter = lower_bound(int_vect.begin(), int_vect.end(), search_int);
        
        if(*iter == search_int){
            cout<<"Yes "<<(iter - int_vect.begin()+1)<<endl;
        }
        else{
            cout<<"No "<<(iter - int_vect.begin()+1)<<endl;
        }
    }
    
    return 0;
}
