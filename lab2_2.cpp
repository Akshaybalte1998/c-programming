#include<iostream>
using namespace std;
int main()
{
    int num , power,Ans=1;
    cout<<"Enter number which you wamt"<<endl;
    cin>>num;
    cout<<"enter number for the raise power"<<endl;
    cin>>power;

    for(int i=1 ; i<=power; i++)
    {
        Ans = Ans * num;
       
    }
    cout<<num <<"  raise to  "<< power<< "  is  "<< Ans<<endl;
}