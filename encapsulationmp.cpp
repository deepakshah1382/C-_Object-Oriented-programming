#include<iostream>
using namespace std;
class learing{
private:
string empname;
string empdept;
int pfaccount;
int salary;
public:
//setter
void pfaccountset(int account ,int amount){
pfaccount=account;
pfaccount=amount;
}
// getter
int pfaccountget(){
    return pfaccount;
}
//setter
void emnameset(string id){
empname=id;
}
//setter2
void emadeptset(string dept){
    empdept=dept;

}
//getter2
string emadeptget(){
    return empdept;
}
//getter
string  emnameget(){
    return  empname;
}
};
int main(){
    learing name1;
    name1.emnameset("1245");
    cout<<name1.emnameget()<<endl;
    //this values set for second is_function
    name1.emadeptset("this is the secoded type");
    cout<<name1.emadeptget()<<endl;
    name1.pfaccountset(1245,555);
    cout<<name1.pfaccountget();
}