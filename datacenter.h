#include <iostream>
#include <string>
#include "student.h"

using namespace std;
#define MAX_STUDENTS 5

class StudentDataCenter
{
private:
    Student students[MAX_STUDENTS];
    int num_students;

public:
    void addStudent(const Student &student)
    {
        if (num_students < MAX_STUDENTS)
        {
            students[num_students++] = student;
        }
        else
        {
            cout << "Cannot add more students." << endl;
        }
    }

    void deleteStudent(int id)
    {
        for (int i = 0; i < num_students; i++)
        {
            if (students[i].getId() == id)
            {
                for (int j = i; j < num_students - 1; j++)
                {
                    students[j] = students[j + 1];
                }
                num_students--;
                return;
            }
        }
    }

    void displayStudents()
    {
        for (int i = 0; i < num_students; i++)
        {
            cout << "ID: " << students[i].getId()
                 << ", Name: " << students[i].getName()
                 << ", Email: " << students[i].getEmail()
                 << ", Phone: " << students[i].getPhone()
                 << ", Age: " << students[i].getAge() << endl;
        }
    }

    void updateStudentById(int id, string roll_number, string name, string email, int phone, int age)
    {
        for (int i = 0; i < num_students; i++)
        {
            if (students[i].getId() == id)
            {
                students[i].setRollNumber(roll_number);
                students[i].setName(name);
                students[i].setEmail(email);
                students[i].setPhone(phone);
                students[i].setAge(age);
            }
        }
    }

    void searchStudentById(int id)
    {
        for (int i = 0; i < num_students; i++)
        {
            if (students[i].getId() == id)
            {
                cout << "Student Found Using ID" << endl;
                cout << "ID: " << students[i].getId()
                     << ", Name: " << students[i].getName()
                     << ", Email: " << students[i].getEmail()
                     << ", Phone: " << students[i].getPhone()
                     << ", Age: " << students[i].getAge() << endl;
            }
        }
    }

    // Default

    StudentDataCenter()
    {
        num_students = 0;
    }
};