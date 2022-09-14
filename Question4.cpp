/*4. Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class.*/
#include <iostream>
using namespace std;
class LargestNum
{
private:
  int a, b, c;

public:
  void setNum(int x, int y, int z)
  {
    a = x;
    b = y;
    c = z;
  }
  int FindLarge();
};

int LargestNum ::FindLarge()
{
  if (a > b && a > c)
    return a;
  if (b > a && b > c)
    return b;
  if (c > a && c > b)
    return c;
}
int main()
{
  LargestNum N;
  int p, q, r;
  cout << "Enter three Numbers : ";
  cin >> p >> q >> r;
  N.setNum(p, q, r);
  cout << "the largest of three number  is " << N.FindLarge() << endl;
  return 0;
}