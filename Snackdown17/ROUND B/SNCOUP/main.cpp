#include <bits/stdc++.h>
#define minfi -10000000
#define infi   10000000
using namespace std;
typedef long int ll;
int main()
{
    ll t,q,i,j,k,n;
    cin>>t;
    for(q=0;q<t;q++)
    {
        cin>>n;
        char A[2][n];
        cin>>A[0];
        cin>>A[1];
        int c1,c2,k;
        c1=c2=k=0;
        int p1=0,p2=0;
        for(i=0;i<n;i++)
        {
            if(A[0][i]=='*')
          {
              c1++;p1=10;
          }
            if(A[1][i]=='*')
              {
                  p2=10;
            c2++;
              }
            if(c1==2 && c2==2)
            {
                k++;c1=c2=1;
            }
            else if(c1==2)
            {
                c2=0;c1=1;
                if(A[1][i]=='*')
                {
                    c2=1;
                }
                k++;
            }
            else if(c2==2)
            {
                c2=1;c1=0;
                if(A[0][i]=='*')
                {
                    c1=1;
                }
                k++;
            }
        }
        if(p1==p2 && p2==10)
        {
            cout<<(k+1)<<"\n";
        }
        else cout<<k<<"\n";

    }
    return 0;
}
