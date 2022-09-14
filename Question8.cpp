/*8. Define a class Rectangle and define an instance member function to find the area of
the rectangle.*/
#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int l,b;
    float Area;
    public:
    void setSide(int x,int y)
    {
        l=x;
        b=y;
    }
    void calculateArea()
    {   
        Area=l*b;
    }
    int getArea()
    {
        return Area;
    }
};
int main()
{
    int a,b;
    cout<<"Enter length and width of rectangle : "<<endl;
    cin>>a>>b;
    Rectangle R;
    R.setSide(a,b);
    R.calculateArea();
    cout<<"the area of the rectangle is : "<<R.getArea()<<endl;
    return 0;
}