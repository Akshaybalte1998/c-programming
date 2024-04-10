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
        for(int j=0; j<col;j++)
        {
            if(i==0||j==0||i== row-1||j== col-1)
                cout<<" # ";
            else
                cout<<" * ";
        }
        cout<<"\n";
    }
return 0;
}
