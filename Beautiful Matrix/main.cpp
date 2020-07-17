#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a[5][5],n=0,m=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
            if(a[i][j] == 1){
                 n=i;m=j;
            }

        }
    }
    cout<<(abs(n-2)+abs(m-2));
    return 0;
}
