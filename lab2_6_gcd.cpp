#include<iostream>
using namespace std;
int main()
{
    int num1 ,num2;
    cout<<"enter a two number num1 and num2: "<<endl;
    cin>>num1>>num2;
    int max=num1;
    if(num2>num1)
        max=num2;
    bool gcd= false;
    for(int i=max;i>1;i--)
    {
        if(num1%i==0 && num2%i==0)
        {
            cout<<"GCD of "<<num1<<" and "<<num2<<" is : "<<i<<endl;
            gcd= true;
        }

    
    }
    if(gcd==false)
        cout<<"GCD of "<<num1<<" and "<<num2<<" is : 1"<<endl;


   
    return 0;
}