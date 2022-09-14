/*5. Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class.*/
#include<iostream>
using namespace std;
class ReverseNumber
{   private:
    int n;
    int rev;
    public:
     void setNum(int x)
     {  
        if(x<0)
        x=-x;
        n=x;
     }
     int getN()
     {
        return n;
     }
     void reverse();
     
};
void ReverseNumber::reverse()
{
    { 
        int rem=0,i;
        for ( i = 0; n!=0; i++)
        {
        
        if (n>0)
        {
            rem=n%10;
            n=n/10;
             rev=rem;
             cout<<rev;
        }
        }

     }
}
int main()
{
    ReverseNumber N;
    int n ;
    cout<<"Enter a number : ";
    cin>>n;
    N.setNum(n);
    cout<<"The Reverse of given Number :";
    N.reverse();
    return 0;
}