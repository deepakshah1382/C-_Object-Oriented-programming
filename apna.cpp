#include <iostream>
#include <string>
using namespace std;
class teacher
{
private:
    double salary;

public:
    // properties or attributes
    string name;
    string dept;
    string subject;

    // mether and member funcation
    void changedept(string newdept)
    {
        dept = newdept;
    }
};
int main()
{
    teacher t1;
    t1.name = "deepak";
    t1.subject = "c++";
    t1.dept = "bca";
    cout << t1.name << endl;
    cout << t1.subject << endl;
    cout << t1.dept << endl;
    cout << "how git hub";
}
