#include "student.h"
#include <iostream>

using namespace std;

int Student::idCounter = 0;

Student::Student(std::string name)
    : name{name},
    id{idCounter}
{
    cout << "Created student: " << name  << "\t" << id<< endl;
    ++idCounter;
}

Student::~Student()
{
    cout << "Destroying: " << name << "\t" << id<< endl;
}
