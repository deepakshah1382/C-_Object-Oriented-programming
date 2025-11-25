#include<iostream>
#include<string>
using namespace std;
class teacher{
public://access pescifier
//date writer techer or student
string name;
string dept;
int  idno;
string subject;
};
int main(){
    //frist objects
teacher t1;
t1.name="deepak";
t1.dept="bca";
t1.idno=12345;
t1.subject="oops";
cout<<t1.name<< t1.dept<<t1.idno<<t1.subject<<endl;
 teacher t2;
 t2.name="sriti";
 t2.idno=12345;
 t2.dept="b.sc";
 cout<<t2.name<<endl;
 cout<<t2.idno<<endl;
 cout<<t2.dept<<endl;
}