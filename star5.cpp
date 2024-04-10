#include<iostream>
using namespace std;
int main()
{
    int row, col;
    cout<<"how many row and col do you want to print?"<<endl;
    cin>>row>>col;
    cout<<"\n\n";

    for(int i=0;i<row;i++)
    {
        for(int j=0; j<i+1;j++)
        {
            if(i==j)
                cout<<" * ";
            else
            cout<<" ";
        }
        cout<<"\n";
    }
return 0;
}
