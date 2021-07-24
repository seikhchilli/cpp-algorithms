#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> ilist(5);

    list<int>::iterator iter;

    iter = ilist.begin();

    int data = 0;

    while(iter != ilist.end()){
        *iter = data += 2;
        *iter++;
    }
    
    list<int>::reverse_iterator revit;

    revit = ilist.rbegin();

    while(revit != ilist.rend()){
        cout << *revit << " ";
        *revit++;
    }

    return 0;
}