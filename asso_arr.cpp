#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    string name;
    int pop;

    string states[] = {"Wyoming", "Colorado", "Nevada", "Montana", "Arizona", "Idaho"};

    int pops[] = {470, 2890, 800, 787, 2718, 944};

    map<string, int, less<string> > mapStates;                  //map
    map<string, int, less<string> >::iterator iter;             //iterator

    for(int i = 0; i < 6; i++){
        name = states[i];                                       //get data from arrays
        pop = pops[i];
        mapStates[name] = pop;                                  //put in map
    }

    cout <<"Enter state: ";                                     //get state from user
    cin>>name;
    pop = mapStates[name];                                      //find population
    cout << "Population: "<< pop << ",000\n";

    cout<<endl;

    for(iter = mapStates.begin(); iter != mapStates.end(); iter++){
        cout << (*iter).first <<' '<<(*iter).second <<",000\n";                         //display entire map  
    }

    return 0;
}