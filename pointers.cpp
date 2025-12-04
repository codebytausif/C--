#include <iostream>
using namespace std;

int main()
{
    // Pointer example
    // Declare an integer variable
    //pointer are used to store address of another variable or memory location of that variable 
    //defining a pointer
    //datatype *pointer_name;
    //dereferencing a pointer
    //using * before pointer name to get value at that address
    //address of operator &
    //using & before variable name to get address of that variable
    //example
    //declare variable
    //declare pointer
    //assign address of variable to pointer
    //print value and address using pointer
    //code

    int a = 6;
    int* b = &a; 
    cout<<"the value of a is ; "<<&a;
    cout<<"\nthe address of a is ; "<<b;
    cout<<"\nthe value at address of b is ; "<<*b;
    //pointer to pointer
    int** c = &b;
    cout<<"\nthe address of b is ; "<<c;
    cout<<"\nthe address of a using c is ; "<<*c;
    cout<<"\nthe value at address of c is ; "<<**c;

    return 0;
}