/*10. Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc.*/
#include<iostream>
using namespace std;
class Area
{
    private:
   float a,b;
   float Area;
   public:
   void setdata(float x)
   {
    a=x;
   }
   float cal_Area_circle()
   {
         Area=3.14*a*a;
         return Area;
   }
   float getdata()
   {
    return Area;
   }
   void setdata(float x,float y)
   {
    a=x;
    b=y;
   }
   float cal_Area_Rectangle()
   {
        Area=a*b;
        return Area;
   }
    
    float cal_Area_Square()
    {
        Area=a*a;
        return Area;
    }
};
int main()
{
    Area A;
    float r;
    cout<<"Enter the Radius of circle :";
    cin>>r;
    A.setdata(r);
    cout<<"The Area of the circle is :"<<A.cal_Area_circle()<<endl;
    float l,b;
    cout<<"Enter length and width of ractangle :";
    cin>>l>>b;
    A.setdata(l,b);
    cout<<"The Area of the Rectangle is :"<<A.cal_Area_Rectangle()<<endl;
    float s;
    cout<<"Enter side of a Square :";
    cin>>s;
    A.setdata(s);
    cout<<"The Area of a Square is : "<<A.cal_Area_Square()<<endl;
    return 0;
}