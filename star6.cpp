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
        for(int j=0;j<2-i;j++)
        {
            cout<<"  ";
            

        }
        
         for(int k=0; k<i+i+1;k++)

        {
            
                cout<<" * ";
        }
            cout<<"\n";



    }
return 0;
}
