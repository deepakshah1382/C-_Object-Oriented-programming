#include <iostream>
#include <string>
using namespace std;
class function
{
public:
    string studentname;
    string studentaddress;
    void learing()
    {
        cout << "hello wrold";
    }
    void student()
    {

        int x = 2;
        int y = 3;
        cout << x + y << endl;
    }
    void mulitpy(){
        int r;
        cout<<"enter the number or side of cricle";
        cin>> r;
        float  area= r*r;
        cout<<area<<endl;
    }
};
int main()
{
    function f1;
    f1.learing();
    f1.student();
    f1.mulitpy();
}