#include<iostream>
using namespace std;
int main()
{
    int num ;
    char ch;
    cout<<"Enter character "<<endl;
    cin>>ch;
    cout<<"enter number after n chartater "<<endl;
    cin>>num;

    for(int i=1 ; i<=num; i++)
    {
    
         cout<<(char)(ch+i)<<" ";
       
    }
   
}