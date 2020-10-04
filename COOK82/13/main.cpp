#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
ll s,t,i,j,k,n,m,p,sum;
cin>>t;
while(t--)
{
    cin>>n;
    ll A[n];
    sum=0;
    for(i=0;i<n;i++)
        {
            cin>>A[i];
            sum+=A[i];
        }
        cout<<"1";
    for(i=2;i<=n;i++)
    {
        if(sum%i!= 0)
        {
            cout<<"0";
        }
        else
        {
            s= sum/i;
            p=m=0;
            for(j=0;j<n;j++)
            {
                p+=A[j];
                if(p== s)
                {
                m++;
                p=0;
                }
                else if(p>s) break;
            }
            if(m== i)
            {
                cout<<"1";
            }
            else cout<<"0";
        }
    }
    cout<<"\n";
}
    return 0;
}
