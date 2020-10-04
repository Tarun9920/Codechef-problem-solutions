#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll a,n,t,c,b,i,j,sum=0,m1,m2;
    cin>>t;
    for(ll q=0;q<t;q++)
    {
        cin>>n;
        ll A[n];
        sum=0;
        for(i=0;i<n;i++)
        {
            cin>>A[i];
        }
        for(i=0;i<n;i++)
        {
            m1=0,m2=1;
            for(j=i;j<n;j++)
            {
                m2= m2*A[j];
                m1+= ((m2%((ll)pow(10,9)+7))* ((ll)pow(2,n-j-2)%((ll)pow(10,9)+7))%((ll)pow(10,9)+7));
                //sum= sum + ()
            }
            sum+=(m1);
            sum= sum%((ll)pow(10,9)+7);
        }
        cout<<sum<<"\n";
    }
        return 0;
}
