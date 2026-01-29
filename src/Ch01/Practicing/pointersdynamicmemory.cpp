// Learning C++ 
// Practicing pointers and dynamic memory allocation

#include <iostream>
using namespace std;

int main ()
{
    int* ptr; //created pionters
    int* temp;
    int x;//created empty int variable
    int y;
    ptr = new int;//dynamically allocated memory to the pointer
    temp = new int;
    *ptr = 4;//sets the value at that pointer address to 4
    *temp = *ptr;//sets the value at the temp pionter address to the value at the pointer address, which is 4
    cout<<*ptr<<*temp<<endl;//prints the values at the pointer addresses


    x = 9;//sets the value of the int var previously created to 9
    //safetly free the memory at temp first?
    delete temp;
    temp = nullptr;
    temp = new int;
    //now can i safely re-use temp>
    *temp = x;//sets value at the pointer temp address to the value of x, which is 9. 
    cout<<*ptr<<*temp<<endl;//prints the values at the pointer addresses

    //safetly free the memory at ptr first?
    y = 5;
    delete ptr;
    ptr = nullptr;
    //now can i safely re-use ptr?
    //Do i need to re-create the pointer with dynamic memory? no, the pointer still exists in the system.
    //ptr = new int;
    ptr = new int;
    *ptr = y;
    cout <<*ptr <<*temp<<endl; // Output:___________
    return 0;
}