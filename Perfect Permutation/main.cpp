#include <iostream>

using namespace std;

int main()
{
    int n; cin>>n;
    int a[n];
    if(n%2 != 0){
        cout<<-1;
        return 0;
    }
    for(int i=1;i<n;i+=2){
        a[i] = i+1;
        a[i+1] = i;
        cout<<a[i]<<" "<<a[i+1]<<" ";
    }

    return 0;
}
