// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){
    auto a = 8;
    auto b = 12345678901;
    auto c = 3.14f;
    auto d = 3.14;
    auto e = true;
    auto f = 'd';

    std::cout<< "The type of a is " << typeid(a).name() << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
