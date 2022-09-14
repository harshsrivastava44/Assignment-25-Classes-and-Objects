/*2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.*/
#include<iostream>
using namespace std;
class Time
{ 
    private:
    int hour;
    int min;
    int sec;
    public:

    void settime(int a,int b,int c)
    {
          hour=a;
          min=b;
          sec=c;
    }
    void display()
    {
        cout<<hour<<" hr : "<<min<<" min : "<<sec<<" sec "<<endl;
    }

};
int main()
{
    Time t;
    t.settime(4,30,45);
    t.display();
    cout<<endl;
    return 0;
}