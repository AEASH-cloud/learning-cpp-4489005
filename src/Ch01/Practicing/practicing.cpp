// Learning C++ 
// Practicing - General

#include <iostream>
#include <cstring>

using namespace std;

//Class to be used in main to try and swap int variable values
void swap (int *x, int *y){
    int temp = 32;
    temp = *x;
    *x = *y;
    *y = temp;
    cout<<"Inside Swap Function (outside of Main): x= "<<*x<<"y= "<<*y<<"temp= "<<temp<<endl;
}    

int main (){
    //Float
    float ten = 10.0f;
    
    //String concantinate
    std::string cat = "Dova";
    std::string kiin = "Kiin";
    std::string canCat = cat + kiin;

    //Pointers
    std::string pointNumb = "Pointer Number";
    std::string *ptrNumb = &pointNumb;
    int *six;
    int s;
    six = &s;
    //int *six = 6;
    //Trying Swapping without Pointers
    int i = 1, j=2;
    swap(&i,&j);

    cout<<"Hello World\n";
    cout<<canCat<<endl;
    cout<<"pointNumb is stored in memory address: "<<&ptrNumb<<endl;
    cout<<"After swap: i= "<<i<<"j= "<<j<<endl;
    return 0;
}
