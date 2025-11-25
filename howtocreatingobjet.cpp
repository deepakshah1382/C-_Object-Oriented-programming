#include <iostream>
#include <string>
using namespace std;
class objectcreating
{
public:
    string employeesname;
    int employeesid;
    int emppoyeessalary;
};
int main()
{ // creating the ojbect

    objectcreating ob2;
    ob2.employeesname = " gopal shah";
    ob2.employeesid = 12345;
    ob2.emppoyeessalary = 123454;
    cout << ob2.employeesname << endl;
    cout << ob2.employeesid << endl;
    cout << ob2.emppoyeessalary << endl;
}
