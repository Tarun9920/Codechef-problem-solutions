#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll A[200][200];
ll check(ll n,ll m)
{
    if(A[0][0]== -1) return -1;
    ll i,j,ma=0,mn;
    for(i=0;i<n;i++)
    {

        for(j=0;j<m;j++)
        {
          if(i!=0 && A[i][j]< A[i-1][j]) return -1;
          if(j!=0 && A[i][j]< A[i][j-1]) return -1;
        }
    }
    return 2;
}
int main()
{
   ll n,i,j,t,m,l,p;
   cin>>t;
   while(t--)
   {
       cin>>n>>m;//  row,col
   //    ll A[n][m];
       for(i=0;i<n;i++)
        {for(j=0;j<m;j++)
        {cin>>A[i][j];}}

        if(A[0][0]== -1)
        {
            A[0][0]=1;
        }
    for(i=1;i<m;i++)// col
        {
            if(A[0][i]== -1)
            {
                A[0][i]= A[0][i-1];
            }
        }
        for(i=1;i<n;i++)// row
        {
            if(A[i][0]== -1)
            {
                A[i][0]= A[i-1][0];
            }
        }
        for(i=1;i<n;i++)
        {
            for(j=1;j<m;j++)
            {
                if(A[i][j]==-1)
                {
                   A[i][j]= max(A[i-1][j],A[i][j-1]);
                }

            }
        }
    i= check(n,m);
    if(i==2)
    {
        for(i=0;i<n;i++)
         {
             for(j=0;j<m;j++)
           {cout<<A[i][j]<<" ";

           }
        cout<<"\n";
         }
    }
    else cout<<"-1\n";
    }
    return 0;
}

