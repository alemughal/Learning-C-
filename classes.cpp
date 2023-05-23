#include <iostream>
#include <string>
using namespace std;

// Car class

class Car
{
public:
    string name;
    int price;
    int model;
    void start()
    {
        cout << "Grrrr...starting the car " << name << endl;
    }
};

// Employee class

class Employee
{
public:
    string name;
    int salary;

    Employee(string n, int s)
    {
        this->name = n;
        this->salary = s;
    }

    void printDetails()
    {
        cout << "The name of our employee is " << this->name << " and his salary is " << this->salary << endl;
    }

    void getPassword()
    {
        cout << "The password is " << this->secretPassword << endl;
    }

private:
    int secretPassword = 44548964321;
};

// Inheritance

class Programmer : public Employee
{
public:
    int errors;
    Programmer(string n, int s, int e) : Employee(n, s)
    {
        this->errors = e;
    }
    void display()
    {
        cout << "The name of our employee is " << this->name << " and his salary is " << this->salary << endl;
        cout << "The number of errors are " << this->errors << endl;
    }
};

int main()
{
    // Car class

    Car BMW;
    BMW.name = "BMW";
    BMW.price = 100000;
    BMW.model = 2020;
    BMW.start();
    cout << "The price of " << BMW.name << " is " << BMW.price << endl;

    Car Audi;
    Audi.name = "Audi";
    Audi.price = 120000;
    Audi.model = 2021;
    Audi.start();
    cout << "The price of " << Audi.name << " is " << Audi.price << endl;

    // Employee class

    Employee hamza("Hamza", 100);
    // hamza.name = "Hamza";
    // hamza.salary = 100;
    hamza.printDetails();

    Employee asad("Asad", 200);
    // asad.name = "asad";
    // asad.salary = 200;
    asad.printDetails();
    asad.getPassword();
}