#include "student.h"

Student::Student(string studentName, int studentAge){
    Age = studentAge;
    Name = studentName;
}


void Student::setAge(int newAge)
{
    Age = newAge;
}

void Student::setName(string newName)
{
    Name = newName;
}

string Student::getName()
{
    return Name;
}

int Student::getAge()
{
    return Age;
}

void Student::printStudentInfo()
{
    cout << "Student " << Name << " age " << Age << endl;
}
