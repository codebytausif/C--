
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // File handling in C++
    // File handling are used to store data permanently in a storage device.
    // Create and open a text file
    ofstream MyFile("example.txt");
    // Write to the file
    MyFile << "Hello, World!\n";
    MyFile << "Hello, World!\n";
    MyFile << "Hello, World!\n";
    MyFile << "Hello, World!\n";
    MyFile << "Hello, World!\n";
    MyFile << "This is a test file.\n";
    // Close the file
    MyFile.close();
    return 0;
}