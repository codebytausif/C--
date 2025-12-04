#include <iostream>
#include <string.h>
using namespace std;

// Defining a structure
// Structure is a user-defined data type that allows to combine data items of different kinds or datatypes
// syntax
// struct structure_name
// {
//      data_type member1;
//      data_type member2;
//      ...
// };

// struct employee
// {
//     /* data */
//     int id;
//     string name;
//     float salary;
//     int experience;
//     int age;
// };

// orwe can use typedef to define structure
//  typedef struct employee
// typedef means when we use typedef then we don't need to use struct keyword while creating structure variable
// we can directly use the structure name
// we create a new name emp for struct employee

typedef struct employee
{
    /* data */
    int id;
    string name;
    float salary;
    int experience;
    int age;
    // the following is an instance of struct employee
} emp;

// Union
// A union is a special data type available in C/C++ that allows to store different data types in the same memory location
// syntax
// union union_name
// {
//      data_type member1;
//      data_type member2;
//      ...
// };
// code
union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};

// Enum
//  to define enum
//  Enum is a user-defined data type that consists of integral constants
//  syntax
enum week
{
    /* data */
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
};

int main()
{
    // creating structure variable
    // giving values to structure members
    // struct employee e1;
    // e1.id = 101;
    // e1.name = "Tausif Ur Rehman";
    // e1.salary = 55000.50;
    // e1.experience = 5;
    // e1.age = 30;

    // or if we use typedef then we can create structure variable like this
    emp e1;
    e1.id = 101;
    e1.name = "Tausif Ur Rehman";
    e1.salary = 55000.50;
    e1.experience = 5;
    e1.age = 30;

    // printing structure members
    cout << "Employee Details:" << endl;
    cout << "ID: " << e1.id << endl;
    cout << "Name: " << e1.name << endl;
    cout << "Salary: $" << e1.salary << endl;
    cout << "Experience: " << e1.experience << " years" << endl;
    cout << "Age: " << e1.age << " years" << endl;

    // Union example
    union money m1;
    m1.rice = 34;
    cout << "The rice value is: " << m1.rice << endl;
    m1.car = 'A';
    cout << "The car value is: " << m1.car << endl;
    m1.pounds = 45.56;
    cout << "The pounds value is: " << m1.pounds << endl;
    // Note: In union, all members share the same memory location. So, changing one member will affect the others.

    // Enum example
    enum week today;
    today = wednesday;
    cout << "The value of today is: " << today << endl;
    week tomorrow = thursday;
    cout << "The value of tomorrow is: " << tomorrow << endl;

    return 0;
}