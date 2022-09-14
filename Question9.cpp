//9. Define a class Circle and define an instance member function to find the area of the circle.
#include<iostream>
using namespace std;
class Circle
{
    private:
    float r;
    float Area;
    public:
    void setSide(float x)
    {
        r=x;
       
    }
    void calculateArea()
    {   
        Area=3.14*r*r;
    }
    float getArea()
    {
        return Area;
    }
};
int main()
{
    int a;
    cout<<"Enter Radius of a circle : : "<<endl;
    cin>>a;
    Circle C;
    C.setSide(a);
    C.calculateArea();
    cout<<"the area of Circle  is : "<<C.getArea()<<endl;
    return 0;
}