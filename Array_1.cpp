#include <iostream>
using namespace std;

int main()
{
    // Array is a collection of items stored at contiguous memory locations
    // to store multiple values of same type
    // syntax
    // datatype array_name[size];
    int marks[4] = {234, 567, 678, 890};
    cout << "these are marks arrays" << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    // you can also update/change the array values before printing it
    marks[2] = 0;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    int mathMarks[4];
    mathMarks[0] = 345;
    mathMarks[1] = 567;
    mathMarks[2] = 789;
    mathMarks[3] = 890;
    cout << "these are math marks" << endl;
    // cout<<mathMarks[0]<<endl;
    // cout<<mathMarks[1]<<endl;
    // cout<<mathMarks[2]<<endl;
    // cout<<mathMarks[3]<<endl;

    // you can also use loop to print array values
    // for loop
    //  for(int i=0;i<4;i++){
    //      cout<<"the math marks of student "<<i<<" is "<<mathMarks[i]<<endl;
    //  }

    // while loop
    int i = 0;
    while (i < 4)
    {
        cout << "the marks of student " << i << " is " << marks[i] << endl;
        i++;
    }

    // do while loop
    i = 0;
    do
    {
        cout << "the math marks of student " << i << " is " << mathMarks[i] << endl;
        i++;
    } while (i < 4);


    // pointers and arrays concept
    int* p = marks;
    // cout << "the value of *p is " << *p << endl;
    // cout << "the value of *(p+1) is " << *(p +1) << endl;
    // cout << "the value of *(p+2) is " << *(p +2) << endl;
    // cout << "the value of *(p+3) is " << *(p +3) << endl;

    // we can also print like this
    // cout << *p << endl;
    // cout << *(p +1) << endl;
    // cout << *(p +2) << endl;
    // cout << *(p +3) << endl;





    // Or we can use loop
    // for loop
    cout<<" This is for loop using pointers "<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout << " For Loop:  the value of marks using pointers is " << *(p + i) << endl;
    }




    cout<<" This is while loop using pointers "<<endl;
    // while loop
    i = 0;
    while (i < 4)
    {
        cout << " While Loop  the value of marks using pointers is " << *(p + i) << endl;
        i++;
    }



    cout<<" This is do while loop using pointers "<<endl;
    // do while loop
    i = 0;
    do
    {
        cout << " Do While Loop    the value of marks using pointers is " << *(p + i) << endl;
        i++;
    } while (i < 4);
    return 0;
}