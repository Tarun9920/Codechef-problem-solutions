#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,n,k,p;
    cin>>t;
    for(int q=0;q<t;q++)
    {
        cin>>n;k=-1;
        int A[n];
        for(i=0;i<n;i++)
        {
            cin>>A[i];
        }
        if(i%2!=0)
        {

            for(i=0;i<n/2;i++)
            {
                if(A[i]!=(i+1))
                {
                    k=10;
            break;        //cout<<"no\n";
                }
            }
            if(A[n/2]!= n/2 +1)
            {
                k=10;
            }
            for(i=n/2 +1;i<n;i++)
            {
                if(A[i]!= n-i)
                {
                    k=10;break;
                }
            }
            if(k==10)
                cout<<"no\n";
            else {cout<<"yes\n";
            }
        }
        else cout<<"no\n";
    }
    return 0;
}
