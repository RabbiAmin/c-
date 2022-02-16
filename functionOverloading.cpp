#include <iostream>
using namespace std;

int plusFuncInt(int x, int y){
    return x+y;
}

double plusFuncDouble(double x, double y){
    return x+y;
}

int main(){
    int NumInt = plusFuncInt (8,9);
    double NumDouble = plusFuncDouble(1.578,.1416);

    cout << "Integer : " << NumInt <<" Double :" <<NumDouble;
}