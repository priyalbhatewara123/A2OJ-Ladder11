#include <iostream>

using namespace std;

int main()
{
    int a1,a2,a3,a4,a5,a6,a7,a8,a9;
    cin>>a1>>a2>>a3>>a4>>a5>>a6>>a7>>a8>>a9;
    cout<<(((a1+a2+a4)% 2 != 0 )? 0 : 1)<<(((a1+a2+a3+a5)% 2 != 0 )? 0 : 1)<<(((a3+a2+a6)% 2 != 0 )? 0 : 1)<<endl;
    cout<<(((a1+a5+a4+a7)% 2 != 0 )? 0 : 1)<<(((a4+a2+a6+a8+a5)% 2 != 0 )? 0 : 1)<<(((a3+a5+a6+a9)% 2 != 0 )? 0 : 1)<<endl;
    cout<<(((a7+a8+a4)% 2 != 0 )? 0 : 1)<<(((a7+a8+a9+a5)% 2 != 0 )? 0 : 1)<<(((a8+a9+a6)% 2 != 0 )? 0 : 1)<<endl;

    return 0;
}
