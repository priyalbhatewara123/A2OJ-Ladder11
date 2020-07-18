#include <iostream>
#define ll long long

using namespace std;

int main()
{
    ll num;
    int count=0;
    cin>>num;
    while(num)
    {
        if((num%10) == 4 ||(num%10) == 7) count++;
        num = num/10;
    }
    if(count == 4 || count == 7) cout<<"YES";
    else cout<<"NO";
    return 0;
}
