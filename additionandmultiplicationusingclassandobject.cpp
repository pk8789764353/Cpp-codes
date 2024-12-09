#include <iostream>
using namespace std;
class numbers
{
private:
  int a, b, c;

public:
  void getvalue();
  void add();
  void mul();
} p;
void numbers::getvalue()
{
  cout << "Enter any three numbers:" << endl;
  cin >> a >> b >> c;
}
void numbers::add()
{
  cout << "Addition = " << a + b + c << endl;
}
void numbers::mul()
{
  cout << "Multiplication = " << a * b * c << endl;
}
int main()
{
  p.getvalue();
  p.add();
  p.mul();
  return 0;
}