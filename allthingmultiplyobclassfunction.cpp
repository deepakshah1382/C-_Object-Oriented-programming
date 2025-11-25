#include <iostream>
using namespace std;

class student
{
public:
    string studentanme;
    int studentclass;
    int studentrollno;
    void sum()
    {
        int x = 3;
        int y = 6;
        cout << x + y;
    }
};
class teacher
{
public:
    string teachername; 
    string teachersubject;
    int teacherid;
    void sourabh()
    {
        int x = 5;
        int y = 5;
        cout << x * y << endl;
    }
};
int main()
{
    student st1;
    st1.sum();
    st1.studentanme = "deepakshah";
    st1.studentclass = 7899;
    cout << st1.studentanme << endl;
    teacher t1;
    t1.sourabh();
    t1.teachername = "suman lad";
    t1.teachersubject = "RDBMS";
    t1.teacherid = 12545;
    cout << t1.teachername<<endl;
    cout << t1.teachersubject << endl;
    cout << t1.teachername << endl;
}