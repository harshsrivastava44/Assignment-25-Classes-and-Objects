/*3. Define a class Factorial and define an instance member function to find the Factorial
of a number using class.*/
#include<iostream>
using namespace std;
class Factorial
{ 
    private:
    int n;
    int fact=1;
   
    public:
    void setN(int x)
    {  
      n=x;

    }
    int getN()
    {
      return n;
    }
    void calculatefact();
   
    int  display()
    {
       return fact;
    }

};
void Factorial::calculatefact()
{
  {
         int i;
         for ( i = 1; i <=n; i++)
         {
           fact=fact*i;
         }
    }
}
int main()
{    Factorial f;
int x;
     cout<<"Enter a number : ";
     cin>>x;
     f.setN(x);
     f.calculatefact();
    cout<<"the Factorial of "<<f.getN()<<" is "<<f.display();
    return 0;
}