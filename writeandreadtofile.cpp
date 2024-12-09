#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char name[50];
    char read[50];
    fstream file;
    file.open("D:\\sample.txt", ios::out);
    cout << "file created" << endl;
    cout << "Enter your message" << endl;
    cin >> name;
    file << name << endl;
    file.close();
    // file.open("D:\\sample.txt",ios::ate);
    // file>>read;
    // cout<<read<<endl;
    file.close();
    return 0;
}