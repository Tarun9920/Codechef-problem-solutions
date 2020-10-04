#include <bits/stdc++.h>
using namespace std;
typedef  long int ll;
int main()
{
    ll i,k,j,p,a,b,t,q;
    cin>>t;
    vector<ll> V;
    for(q=0;q<t;q++)
    {
        cin>>p>>a>>b;
        k=0;
        for(ll x=0;x<p;x++)
        {
            ll t1= pow(x+b, a);
            ll t2= pow(x,a);
            t2= t2%p;
            cout<<t1<<" "<<t2<<"\n";
            if(t1==t2)
            {
                cout<<x<<" ";
                k++;
            }
            if((x+b >p ))
            break;
        }
        if(k==0)
            cout<<"no solution";

            cout<<"\n";
        }
    return 0;
}
