#include <iostream>
#include <string>
using namespace std;

class person{
    public:    //Access specifier
    int id;
    string name;
    void message(){ //define method
        cout<<"You access from person method";
    }
};

int main(){
    person man1;//man1 create for person class
    man1.message();//call method
}