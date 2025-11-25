
#include<iostream>
using namespace std;
class outsidefunction{
    public:
    int  roll;
    string student ;
void outsidemethed();
};
void outsidefunction::outsidemethed(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    for(int i=1; i<=n; i++){//this is outer loop 
        for(int j=1;j<=n-i; j++){
            cout<<"*";
        }
        for(int j=1; j<=i; j++){
            cout<<"#";
        }
        cout<<endl;
        }
}
int main(){
    outsidefunction partten;
    partten.outsidemethed();
    partten.roll= 451;
    partten.student="deepakshah";
    cout<<partten.roll<<partten.student<<endl;
}

