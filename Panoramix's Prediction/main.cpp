#include <iostream>

using namespace std;

bool isPrime(int n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;

    return true;
}

int main()
{
    int n,m;
    cin>>n>>m;
    if(isPrime(m))
    {
       for(int i=n+1;i<m;i++)
    {
        if(isPrime(i)){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}
