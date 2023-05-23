#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *p = &a;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<*p<<endl;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<p<<endl;
}