#include <iostream>
#include <string>
using namespace std;
class outsideparem
{
public:
    string city;
    string country;
    string name;
    string qulification;
    int deepak2(int myvalues);
};

int outsideparem::deepak2(int myvalues)
{
    cout << "this my function perameter";
}
int main(){
outsideparem p1;
cout<<p1.deepak2(200);



}