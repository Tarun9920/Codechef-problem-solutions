#include <bits/stdc++.h>
using namespace std;
typedef long  int ll;
//struct A{ll a[1000000][];};
int main()
{
  ll n,k,q,m,d,i,j,s,desti;
  cin>>n>>k;
  ll A[n+1];
  for(i=1;i<=k;i++)
  {
      cin>>m;
      for(j=0;j<m;j++)
      {
          cin>>d;
          A[d-1]=i;
      }
  }
  cin>>q;
  for(i=0;i<q;i++)
  {
      cin>>s>>desti;
    ll p1,p2,p3;
    p1= A[s-1];
    p2= A[desti-1];
    if(p1>p2)
    {
        p1=p1+p2;
        p2 =p1-p2;
        p1= p1-p2;
    }
    p3= min((p2-p1), (p1+ k -p2));
    cout<<p3<<"\n";
  }
    return 0;
}
