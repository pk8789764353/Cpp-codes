#include <iostream>
using namespace std;
class a
{
    int a, b;

public:
    void getdata()
    {
        cout << "Enter first number:" << endl;
        cin >> a;
        cout << "Enter second number:" << endl;
        cin >> b;
    }
    void displaydata()
    {
        cout << "sum is:" << a + b << endl;
    }
};
int main()
{
    // a e;
    // a *j=new a;
    // a *p=&e;
    // (*p).getdata();
    // (*p).displaydata();
    // p->getdata();
    // p->displaydata();
    //  (*j).getdata();
    // (*j).displaydata();
    // j->getdata();
    // j->displaydata();
    a *n = new a[7];
    cout << "Enter the number of students:" << endl;
    int b;
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        n->getdata();
    }
     delete n ;
    for (int i = 0; i < b; i++)
    {
        (*n).displaydata();
    }
   
    return 0;
}