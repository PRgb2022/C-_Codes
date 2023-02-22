#include<iostream>
using namespace std;
int main()
{
    int l,b;
    cout<<"Enter the length of the rectangle: ";
    cin>>l;
    cout<<"Enter the breadth of the rectangle: ";
    cin>>b;
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<b;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}