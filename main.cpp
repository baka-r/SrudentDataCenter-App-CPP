#include <iostream>
#include <string>
#include "datacenter.h"
using namespace std;

int main()
{
    // initailize data center app
    StudentDataCenter obj;
    // make students 
    Student s1(1, "F2023065228", "Abubakar Siddiq", "F2023065228@umt.edu.pk", 1234567890, 18);
    Student s2(2, "F2023065229", "None", "None@umt.edu.pk", 1234567890, 20);
    // use the data center app obj to add student in the app
    obj.addStudent(s1);
    obj.addStudent(s2);
    // use this func to display list of all students
    obj.displayStudents();
    // use this to delete a student by id
    // obj.deleteStudent(2);
    // use this to update a student by its id
    obj.updateStudentById(2, "F2023065229", "ahmed", "ahmed@umt.edu.pk", 1234567890, 20);
    // use this to search a student by its id
    obj.searchStudentById(2);
}
