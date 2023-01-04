#include <iostream>

using namespace std;

int main()
{
    int n,flag = 0;
    cin>>n;
    
    int ara[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>ara[i];
    }
    
    int k;
    cin >> k;
    
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(ara[i]+ara[j]==k && i!=j)
                flag = 1;
        }
    }
    
    if(flag)
        cout<<"Yes";
    else
        cout<<"No";

    return 0;
}
