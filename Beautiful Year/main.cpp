#include <iostream>

using namespace std;

bool isBeautiful(int y)
{
    bool visited[10] = {false};
    while(y)
    {
        if(visited[y%10])
        {
            return false;
        }
        visited[y%10] = true;
        y = y/10;
    }
    return true;
}

int main()
{
    int year;
    cin>>year;
    year = year+1;
    while(!(isBeautiful(year)))
    {
     year++;
    }
    cout<<year;
    return 0;
}
