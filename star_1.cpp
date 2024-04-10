#include<iostream>
using namespace std;
int main()
{ int row , col;
  cout<<"enter the number for row and column"<<endl;
  cin>>row>>col;

  for(int i =0;i<row;i++)
  {
    for(int j=0;j<i+1;j++)
    {
        cout<<" * ";
    }
    cout<<"\n";
  }



}