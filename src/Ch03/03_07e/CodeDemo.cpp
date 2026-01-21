// Learning C++ 
// Exercise 03_07
// Using Objects with Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include "cow.h"

int main(){
    cow *my_cow;//this is where you create a pointer to an object by usingn *

    my_cow = new cow("Gertie", 3, cow_purpose::hide);//had to add "new" in front of cow (indicating you're creating a new object)
    std::cout << my_cow->get_name() << " is a type-" << (int) my_cow->get_purpose() << " cow." << std::endl;//had to replace "." with "->" between the object and its attribute you're callig
    std::cout << my_cow->get_name() << " is " << my_cow->get_age() << " years old." << std::endl;
    
    delete my_cow;//BEST PART! you can delete the object right after running it, saving space in memory!!! 
    
    std::cout << std::endl << std::endl;
    return (0);
}
