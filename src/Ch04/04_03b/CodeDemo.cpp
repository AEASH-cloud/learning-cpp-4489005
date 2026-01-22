// Learning C++ 
// Exercise 04_03
// While Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers = {12, 25, 31, 47, 58};
    
    auto ptr = numbers.begin();

    while (ptr != numbers.end()){//basically, keep the while loop going until it reaches the end of the vector 
        ptr = next(ptr,1);//but have to manually tell the iterator to move forward one position
    }
    int i = 0;
    
    do{
        std::cout<<*ptr <<" ";
        i++;//then must manually increment up
    } while (i <numbers.size());//keep looping through as long as the iterator variable (number of times gone through the loop) is smaller than the size of the data structure, which we get by using the .size() function for vectors

    std::cout << std::endl << std::endl;
    return (0);
}
