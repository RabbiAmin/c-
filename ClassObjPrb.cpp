#include <iostream>
#include <string>
using namespace std;

class student{
   public:
    string name;
    int roll;
    int passYear;
    bool gander;
};

int main(){
    student firstBoy;
    student secondBoy;
    student thirdBoy;


    firstBoy.name = "Md. Rabbi Amin";
    firstBoy.roll = 1;
    firstBoy.passYear = 2020;
    firstBoy.gander= true;

    cout << "First boy name is "<<firstBoy.name<< " and his gender ";
    if (firstBoy.gander == true){
        cout<<"male";
    }else cout<<"female";
}