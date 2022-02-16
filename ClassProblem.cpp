#include <iostream>
#include <string>
using namespace std;


class firstClass{
    public:
    int number;
    string text;
};

int main(){
    firstClass firstObj;

    firstObj.number=100;
    firstObj.text="Rabbi Amin";

    cout<<firstObj.number<<"\n";
    cout<<firstObj.text;
}