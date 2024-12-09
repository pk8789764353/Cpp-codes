#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream new_file;
    new_file.open("D:\\new_file_write.txt", ios::in);
    if (!new_file)
        cout << "No such file";

else
{
    string ch;
    while (!new_file.eof())
    {
       getline(new_file,ch);
        cout << ch;
    }
    new_file.close();
    return 0;
}
}