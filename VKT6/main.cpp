#include <iostream>
#include <vector>
#include <algorithm>
#include "student.h"

using namespace std;


int main ()
{
    int selection = 0;
    vector<Student>studentList;
    string studentName;
    int studentAge;
    string target;
    vector<Student>::iterator it;

    do{
        cout << endl;
        cout << "Select" << endl;
        cout << "Add students = 0" << endl;
        cout << "Print all students = 1" << endl;
        cout << "Sort and print students according to Name = 2" << endl;
        cout << "Sort and print students according to Age = 3" << endl;
        cout << "Find and print student = 4" << endl;
        cin >> selection;

        switch(selection)
        {
        case 0: // add student
            cout << "Give the new students name: " << endl;
            cin >> studentName;
            cout << "Give the new students age: " << endl;
            cin >> studentAge;
            studentList.emplace_back(studentName, studentAge);
            break;
        case 1: // print students
            for(auto &student: studentList){
                student.printStudentInfo();
            }
            break;
        case 2: // sort and print students by name
            sort(studentList.begin(), studentList.end(), [](Student &a, Student &b){
                return a.getName() < b.getName();
            });
            for(auto &student: studentList){
                student.printStudentInfo();
            }
            break;
        case 3: // sort and print students by age
            sort(studentList.begin(), studentList.end(), [](Student &a, Student &b){
                return a.getAge() < b.getAge();
            });
            for(auto &student: studentList){
                student.printStudentInfo();
            }
            break;
        case 4: // search student by naem
            cout << "Give the students name who you want to find: " << endl;
            cin >> target;
            it = find_if(studentList.begin(), studentList.end(),[target](Student &findStudent){
            return findStudent.getName() == target;
            });
            if(it != studentList.end()){
                cout << "Student found: " << endl;
                it->printStudentInfo();
            }
            else{
                cout << "Student not found" << endl;
            }
            break;

        default:
            cout << "Wrong selection, stopping..." << endl;
            break;
        }
    }while(selection < 5);
return 0;
}
