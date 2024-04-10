#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number: "<<endl;
    cin>>num;
    cout<<"the factor of "<<num <<"is : ";
    for(int i = 1 ; i<=num;i++)
    {
        if(num%i==0)
            cout<< i<<" ";
    }
    return 0;
}