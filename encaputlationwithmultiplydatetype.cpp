#include <iostream>
using namespace std;
class information
{
private:
    string name;
    

public:
    // setter
    void infoset(string custmber,string id)
    {
        name = custmber+id;
    }
    // getter
    string  infoget()
    {
        return name;
    }
};
int main()
{
    information in1;
    in1.infoset("lora","he");
    cout<< in1.infoget();
}
