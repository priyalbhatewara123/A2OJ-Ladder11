#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    int j=0,count=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[j]) j=i;
        else count++;

    }
    cout<<count;

    return 0;
}
