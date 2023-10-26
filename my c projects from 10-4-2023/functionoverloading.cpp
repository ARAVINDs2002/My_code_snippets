#include<iostream>
using namespace std;
int  add(int a,int b)
{
    cout<<a+b<<"\n";
}

int  add(double a,double b)
{
    cout<< a+b<<"\n";
}
string  add(string a,string b)
{
    cout<<a+b<<"\n";
}


int main()
{
    add(1,5);
    add(22.2,22.1);
    add("arav","ind");
}
