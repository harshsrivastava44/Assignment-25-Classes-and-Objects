/*1. Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number*/
#include<iostream>
using namespace std;
class complexnum
{
private:
    int real;
    float image;
public:
    void setvalue(int a, int b)
    {
        real=a;
        image=b;
    }
    void print()
    {
        cout<<real<<" + "<<image<<"i"<<endl;
    }
};

int main()
{
    complexnum c;
    c.setvalue(5,7);
    c.print();
    cout<<endl;
    return 0;
}