#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main(){
    vector<int> int_vect;

    int array[5] = {2, 4, 6, 8, 10};

    set< int, less<int> > odd_set;
    odd_set.insert(1);
    odd_set.insert(3);
    odd_set.insert(5);
    odd_set.insert(7);
    odd_set.insert(9);
    set< int, less<int> >::iterator iter;

    merge(array, array+5, odd_set.begin(), odd_set.end(), back_inserter(int_vect));

    for(int i = 0; i < 10; i++){
        cout << int_vect[i]<< " ";
    }

    cout<<endl;

    return 0;
    
}