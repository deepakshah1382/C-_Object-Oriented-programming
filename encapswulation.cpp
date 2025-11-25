#include <iostream>
using namespace std;
class encapsulation
{
private:
    int account;

public:
    // getter
    int accountset(int number)
    {
        // we tring to convert one date to

        account = number;
    }
    // setter

    int accountget()
    {
        return account;
    }
};
int main()
{
    encapsulation accnt;
    accnt.accountset(45878);
    cout << accnt.accountget();
}