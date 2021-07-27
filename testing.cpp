#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
protected:    
    char name[20];
    int age;
public:
    void getperson(){
        cin>>name;
        cin>>age;
    }
    
    void putperson()const{
        cout<<name<<" ";
        cout<<age<<" ";
    }

    virtual void getdata() = 0;
    virtual void putdata() = 0;
};

class Professor : public Person{
private:
    int publications;
    static int cur_id;
    int id;
public:
    Professor(){
        cur_id++;
        id = cur_id;
    }
    void getdata(){
        Person::getperson();
        cin>>publications;
    }
    
    void putdata(){
        Person::putperson();
        cout<<publications<<" ";
        cout<<id;
        cout<<endl;
    }
};

class Student : public Person{
private:
    int marks[6];
    static int cur_id;
    int id;
public:
    Student(){
        cur_id++;
        id = cur_id;
    }
    int total_marks = 0;
    void getdata(){
        Person::getperson();
        for(int i = 0; i < 6; i++){
            cin>>marks[i];
            total_marks += marks[i];
            
        }
    }
    
    void putdata(){
        Person::putperson();
        cout<<total_marks<<" ";
        cout<<id;
        cout<<endl;
    }
};

int Professor::cur_id = 0;
int Student::cur_id = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
