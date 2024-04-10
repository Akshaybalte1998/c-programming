#include<iostream>
using namespace std;
int main()
{
    int row, col;
    cout<<"enter the row and col"<<endl;
    cin>>row>>col;
    cout<<"\n\n";

    for(int i=0;i<row;i++)
    {
        for(int j=0; j<i+1;j++)
        {
            if(i==j)
                cout<<" * ";
            else
                cout<<" 1 ";
        }
        cout<<"\n";
    }
return 0;
}
