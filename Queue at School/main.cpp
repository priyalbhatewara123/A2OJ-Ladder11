#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--){
        for(int i=1;i<n;i++){
            if((s[i-1] == 'B') && (s[i] == 'G')){
                swap(s[i-1],s[i]);
                i++;
            }
            else
                continue;
        }
    }
    cout<<s;
    return 0;
}
