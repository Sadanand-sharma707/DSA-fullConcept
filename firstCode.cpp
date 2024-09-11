#include <iostream>
using namespace std;

int main()
{
    cout<<"hello world"<<endl;
    cout<<"hi i am sadanand sharma\n form apna college"<<endl;
    int age=24;
    char x='A';
    float price=100.22f;  

    

    char grade='A';
    int value=grade;  //implicit conversion
    cout<<value<<endl;//65

    //Type Casting
    // Explicit conversation manually done by the programmer
    //it is use to bigData to small Data

    double prices=100.99;
    int newPrice=(int)prices;//typecasting
    cout<<"typeCasting value are ="<<newPrice<<endl;


    return 0;
}