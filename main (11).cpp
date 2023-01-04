#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int ara[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>ara[i];
    }
    
    for(int i=0 ; i<n ; i++)
    {
        cout<<ara[i]<<"- ";
        for(int j=0 ; j<n ; j++)
        {
            if(i!=j)
                cout<<ara[j]<<" ";
            else
                continue;
        }
        cout<<"\n";
    }

    return 0;
}
