#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> deq;

    deq.push_back(30);                                  //push items on back
    deq.push_back(40);
    deq.push_back(50);
    deq.push_back(20);
    deq.push_back(10);                                  //push items on front

    deq[2] = 33;                                        //change middle item

    for(int i = 0; i < deq.size(); i++){
        cout<<deq[i]<<' ';                              //display items
    }

    cout<< endl;
    return 0;
}