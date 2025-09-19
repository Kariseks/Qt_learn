#ifndef STUDENT_H
#define STUDENT_H

#include <string>
class Student
{
public:
    Student(std::string name);
    ~Student();

private:
    std::string name;
    const int id;
    static int idCounter;
};

#endif // STUDENT_H
