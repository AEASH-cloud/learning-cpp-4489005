// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

#define MEAT 8

enum class cow_purpose {dairy, meat, hide, pet};
enum class grocery_section {canned=10, frozen=22, meat=60, laundry=12, dairy=15, baker=45};

int main(){
    int meat = MEAT;
    //a is an instance of cow_purpose?
    cow_purpose b;
    grocery_section c;
    
    //create a simple variable to call that stores the enum item? 
    b = cow_purpose::hide;
    c = grocery_section::baker;

    std::cout<<"b = "<< (int) b << std::endl;
    std::cout<<"meat price = "<< meat << std::endl;
    
    std::cout<<"baker price = "<< (int)c << std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
