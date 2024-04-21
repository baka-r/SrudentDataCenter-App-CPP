#include <string>

using namespace std;

class Student
{
private:
    int student_id;
    string student_roll_number;
    string student_name;
    string student_email;
    int student_phone;
    int student_age;

public:
    // setters

    void setId(int id)
    {
        student_id = id;
    }
    void setRollNumber(string roll_number)
    {
        student_roll_number = roll_number;
    }
    void setName(string name)
    {
        student_name = name;
    }
    void setEmail(string email)
    {
        student_email = email;
    }
    void setPhone(int phone)
    {
        student_phone = phone;
    }
    void setAge(int age)
    {
        student_age = age;
    }

    // getters

    int getId()
    {
        return student_id;
    }
    string getRollNumber()
    {
        return student_roll_number;
    }
    string getName()
    {
        return student_name;
    }
    string getEmail()
    {
        return student_email;
    }
    int getPhone()
    {
        return student_phone;
    }
    int getAge()
    {
        return student_age;
    }

    // Default

    Student()
    {
        student_id = 0;
        student_roll_number = "";
        student_name = "";
        student_email = "";
        student_phone = 0;
        student_age = 0;
    }

    // Perameterized

    Student(int id, string roll_number, string name, string email, int phone, int age)
    {
        student_id = id;
        student_roll_number = roll_number;
        student_name = name;
        student_email = email;
        student_phone = phone;
        student_age = age;
    }
};