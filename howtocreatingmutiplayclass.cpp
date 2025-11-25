#include <iostream>
#include <string>
using namespace std;
class giral
{
private:
    string instregramid;
    double phone;

public:
    string giralname;
    string giraladdress;
    int giralrollno;
    int giralage;
};
class boy// other class
{
private:
string instregramid;
double phone;
public:
string boyname;
string boyaddress;
int boyrollno;
int boyage;
};
int main(){
    giral g1;
    g1.giralname="priya";
    g1.giraladdress="pakriya rupoli";
    g1.giralrollno=1234543;
    //cout<<g1.giralname;
   // cout<<g1.giralrollno<<endl;
// class ojects 
boy b1;
b1.boyname="deepak";
b1.boyaddress="welspun colony morai vapi";
cout<<b1.boyaddress<<endl;
cout<<b1.boyname;
cout<<g1.giralname<<endl;
cout<<g1.giraladdress<<endl;
cout<<g1.giralrollno<<endl;
}
