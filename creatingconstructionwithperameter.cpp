#include <iostream>
using namespace std;
class constructionwithperameter
{
public:
    string brand;
    string model;
    int years;
    double price;
    constructionwithperameter(string x, string y, int z, double p)
    {
        brand = x;
        model = y;
        years = z;
        price = p;
        // cout<<"this is construction with perameter";
    }
};
int main()
{
    constructionwithperameter obj1("bwm", "x4", 20000, 1);
    constructionwithperameter obj2("etika","hond",2010,11.5);
    cout << obj1.brand << " " << obj1.model << " " << obj1.years << " " << obj1.price<<endl;
        cout << obj2.brand << " " << obj2.model << " " << obj2.years << " " << obj2.price;
}
