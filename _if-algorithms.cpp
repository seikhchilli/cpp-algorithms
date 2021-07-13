//searches array of strings for first name that matches 'Don'
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool isDon(string name){
    return name == "Don";
}

string names[] = {"George", "Estelle", "Don", "Mike", "Bob"};

int main(){
    string* ptr;
    ptr = find_if(names, names+5, isDon);

    if(ptr == names+5){
        cout<<"Don is not on the list.\n";
    }
    else{
        cout<<"Don is element"<<(ptr-names)<<" on the list.\n";
    }
    return 0;
}