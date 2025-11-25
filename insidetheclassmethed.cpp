#include <iostream>
using namespace std;
class inside
{
public:
    string name;
    int roll;
    int std;
    void insert()
    {
        int x = 4;
        int y = 5;
        cout << x + y << endl;
    }
};
int main()
{

    inside inst1;
    inst1.insert();
    inst1.name = "this is inside methed function";
    inst1.roll = 78945;
    inst1.std = 8;
    cout << inst1.name << endl;
    cout << inst1.roll << endl;
    cout << inst1.std << endl;
    inst1.insert();
}
