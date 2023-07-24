#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter number";
    cin>>a;
    for (int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            cout<<"number is not prime";
            break;
        }
        else
        {
        cout<<"no. is prime";
        break;
        }
    }
}