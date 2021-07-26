#include<iostream>
#include<string>
#include<set>
using namespace std;

class person{
private:
    string first_name;
    string last_name;
public:
    person() : first_name(NULL), last_name(NULL){

    }

    person(string fina, string lana) : first_name(fina), last_name(lana){

    }

    void display(){
        cout << endl << first_name << "\t" << last_name;
    }

    friend bool operator < (const person&, const person&);
    friend bool operator == (const person&, const person&);
   // friend bool operator > (const person& p1, const person& p2);

};

bool operator < (const person& p1, const person& p2){
    if(p1.first_name == p2.first_name){
        return (p1.last_name < p2.last_name) ? true : false;
    }
    return (p1.first_name < p2.first_name) ? true : false;
}

bool operator == (const person& p1, const person& p2){
    return (p1.first_name == p2.first_name && p1.last_name == p2.last_name)? true : false;
}

/*bool operator > (const person& p1, const person& p2){
    return !(p1==p2) && !(p1 <p2);
}*/

class comparePersons{
public:
    bool operator() (const person* p1, const person* p2) const{
        return *p1 < *p2;
    }

};

int main(){
    multiset <person*, comparePersons > perSet;

    person* pers1 = new person("Saurabh", "Kumar");
    person* pers2 = new person("Suman", "Kumari");
    person* pers3 = new person("Saurabh", "Kumar");
    person* pers4 = new person("Sonica", "Rajput");
    person* pers5 = new person("Seikh", "Chilli");

    perSet.insert(pers1);
    perSet.insert(pers2);
    perSet.insert(pers3);
    perSet.insert(pers4);
    perSet.insert(pers5);

    multiset <person*, comparePersons >::iterator iter;

    iter = perSet.begin();
    while (iter != perSet.end())
    {
        (*iter)->display();
        *iter++;
    }
    
    cout << endl;
    return 0;
}