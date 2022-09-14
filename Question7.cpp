/*7. Define a class Greatest and define instance member function to find Largest among
3 numbers using classes.*/
#include<iostream>
using namespace std;
class Greatest
{ 
    private:
    int a,b,c;
    int Larg;
    public:
    void setNum(int x,int y,int z)
    {
       a=x; b=y; c=z; 
    }
    void FindLargest();
    int getLargest()
    {
        return Larg;
    }
     
};
void Greatest::FindLargest()
{
    if (a>b && a>c)
     Larg=a;
    if (b>a && b>c)
     Larg=b;
    else 
    Larg= c;
}
int main()
{
    Greatest G;
    int a,b,c;
    cout<<"Enter three Numbers :"<<endl;
    cin>>a>>b>>c;
    G.setNum(a,b,c);
    G.FindLargest();
    cout<<"The largest Number is :"<<G.getLargest();
    return 0;
}