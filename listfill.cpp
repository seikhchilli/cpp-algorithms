#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> ilist(5);

    list<int>::iterator itr;

    int data = 0;

    for(itr = ilist.begin(); itr != ilist.end(); itr++){
        *itr = data += 2;
    }

    for(itr = ilist.begin(); itr != ilist.end(); itr++){
        cout << *itr << ' ';
    }

    return 0;


}