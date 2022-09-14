/*6. Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.*/
#include<iostream>
using namespace std;
class Square
{
   
   private:
   int n;
   int Square;
   public:
     void SetNum(int x)
     {  if(x<0)
         x=-x;
        n=x;
     }
     int getNum()
     {
        return n;
     }
      void CalculateSquare()
       {
            Square=n*n;
        
       }
       int getsquare()
       {
        return Square;
       }

};
int main()
{   
    Square S;
    int a;
    cout<<"Enter a number :";
    cin>>a;
    S.SetNum(a);
    S.CalculateSquare();
    cout<<"The Square of "<<S.getNum()<<" is "<<S.getsquare()<<endl;
}