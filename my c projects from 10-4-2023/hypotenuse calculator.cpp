#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a;
    double b;
    double c;
    cout<<"enter the value for side A :"<<endl;
    cin>>a;
      cout<<"enter the value for side B :"<<endl;
    cin>>b;

    a=pow(a,2);
    b=pow(b,2);
    c=sqrt(a+b);
      cout<<"side of c is :"<<c;

}
