// C++ code to demonstrate the working of
// getline(), push_back() and pop_back()
#include<iostream>
#include<string> // for string class
using namespace std;
int main()
{
    // Declaring string
    string str;

    // Taking string input using getline()
    // "geeksforgeek" in giving output
    getline(cin,str);

    // Displaying string
    cout << "The initial string is : ";
    cout << str << endl;

    // Using push_back() to insert a character
    // at end
    // pushes 's' in this case
    str.push_back('s');

    // Displaying string
    cout << "The string after push_back operation is : ";
    cout << str << endl;

    // Using pop_back() to delete a character
    // from end
    // pops 's' in this case
    str.pop_back();

    // Displaying string
    cout << "The string after pop_back operation is : ";
    cout << str << endl;

    return 0;

}