#pragma warning (disable:4786)
#include<iostream>
#include<set>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string names[] = {"Juanita", "Robert", "Mary", "Amanda", "Marie"};              //array of string objects

    set<string, less<string> > nameSet(names, names+5);                             //initialize set to array

    set<string, less<string> >::iterator iter;

    nameSet.insert("Yvette");                                                       //insert more names
    nameSet.insert("Larry");

    nameSet.insert("Robert");                                                       //no effect; already in set
    nameSet.insert("Barry");
    nameSet.erase("Mary");                                                          //erase a name

    cout<<" \nSize=" << nameSet.size() <<endl;                                      //display size of set

    iter = nameSet.begin();
    while (iter != nameSet.end())
    {
        cout<< *iter++ <<'\n';                                                     //display members of set
    }

    string searchName;                                                              //get name from user

    cout<< "\nEnter name to search for: ";
    cin>>searchName;

    iter = nameSet.find(searchName);                                                //find matching name in the set
    if(iter == nameSet.end()){
        cout<<" The name "<<searchName<<" is NOT in the set. ";
    }
    else {
        cout<<" The name "<<searchName<<" IS in the set. ";
    }
    cout<<endl;
    return 0;
    
}