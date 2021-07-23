#include<iostream>
#include<list>
using namespace std;

int main(){
    int arr[] = {2, 4, 6, 8};

    list<int> theList;

    for(int i = 0; i < 4; i++){
        theList.push_back(arr[i]);
    }

    list<int>::iterator iter;

    
/////////////for loop//////////////////////////////

    for(iter = theList.begin(); iter != theList.end(); iter++){
        cout<<*iter<<" "; 
    }

/////////////while loop///////////////////////////

/*
    iter = theList.begin();
    while(iter != theList.end()){
        cout << *iter++<<" ";
    }
*/

    return 0;
}