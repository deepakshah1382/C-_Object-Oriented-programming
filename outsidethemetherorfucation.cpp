#include <iostream>
using namespace std;
class outsidefuncation
{
    public:
    string outschool;
    string passoutname;
    int passoutr;
    void deepak1();
};
void outsidefuncation::deepak1(){
cout<<4+5+6<<endl;
}

int main(){
    outsidefuncation out1;
    out1.deepak1();
    out1.outschool="this is outside funaction";
out1.passoutname="sourabh,deepak, syam, mayank,ankit,rahul";
cout<<out1.outschool;
}