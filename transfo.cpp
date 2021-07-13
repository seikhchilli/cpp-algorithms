#include<iostream>
#include<algorithm>
using namespace std;

double in_to_cm(double);
void print(double);

double inches[] = {3.5, 6.2, 1.0, 12.75, 4.33};
double centi[5];

int main(){
    
    transform(inches, inches+5, centi, in_to_cm);

    for_each(centi, centi+5, print);
     
    cout<<endl;
    return 0;
}

double in_to_cm(double inch){
    return (inch*2.54);
}

void print(double cm){
    cout<<cm<<' ';
}