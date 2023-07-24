#include<iostream>
using namespace std;
void main()
{
    int a;
    cin>>a;
    for (int i=0;i<a;i++)
    {
        if(a%i==0)
        {
            cout<<"number is prime";
            break;
        }
        cout<<"not prime";
    }
}