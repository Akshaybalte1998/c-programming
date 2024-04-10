#include<iostream>
using namespace std;
int main()
{
    int num ;
    int sum=0;
    
    while(true)
    {
        cout<<"enter a positive number and enter negative or zero for exist"<<endl;
        cin>>num;
    
        if(num<=0)
         break;
         
        sum = sum +num;
        cout<<"sum= "<<sum<<endl;
        cout<<"\n\n"; 
    }
     
        
  

     

return 0;
}