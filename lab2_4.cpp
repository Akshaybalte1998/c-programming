#include<iostream>
using namespace std;
int main()
{
    int num , fact=1 ;
    cout<<"Enter number for factorial"<<endl;
    cin>>num;

    for(int i=1 ; i<=num; i++)
    {
        fact = fact * i;
        // if(i==num)
        //     cout<<"factorial of "<< num << " is "<< fact<< endl;
       
    }
     cout<<"factorial of "<< num << " is "<< fact<< endl;
}