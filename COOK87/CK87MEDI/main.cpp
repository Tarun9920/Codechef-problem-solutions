#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,x,i,y,j,k,t;
   int A[3000];
   cin>>t;
   while(t--)
   {
       cin>>n>>k;
       for(i=0;i<n;i++)
       {
           cin>>A[i];
       }
       sort(A,A+n);
       k= (k+n)/2;
       cout<<A[k]<<"\n";
   }
    return 0;
}
