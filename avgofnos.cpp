#include <iostream>
using namespace std;

int main()
{
    int a,k=0,n;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>n;
        k=k+n;
    }
    cout<<"the avg is"<< k/a;
}

