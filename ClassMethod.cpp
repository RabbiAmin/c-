#include <iostream>
#include <string>
using namespace std;

class person{
    public:
    int id;
    string name;
    void message(){
        cout<<"You access from person method";
    }
};

int main(){
    person man1;
    man1.message();
}