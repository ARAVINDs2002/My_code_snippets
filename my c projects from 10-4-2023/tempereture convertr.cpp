#include<iostream>
using namespace std;
int main()
{
    double temp;
    char unit;
    cout<<"**************temperature converter**************\n";
    cout<<"use  F  for farenheat \n";
    cout<<"use  C  for celsius\n";
    cout<<"what would you like to convert into\n";
    cin>>unit;
    if(unit=='F'||unit=='f')
    {
        cout<<"enter temperature in celsius   :";
        cin>>temp;
        temp=(1.8*temp);
        cout<<"tempereture in celsius is   "<<temp;

        }
           else if(unit=='C'||unit=='c')
    {
        cout<<"enter temperature in farenheit   :";
        cin>>temp;
        temp=(temp-32)/1.8;
        cout<<"tempereture in faranheit is   "<<temp;

        }
        else{
            cout<<"do you even have a brain to type input ?...";
        }


}
