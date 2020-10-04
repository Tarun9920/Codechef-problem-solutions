#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
   ll x,b,i,t,y,a,to;
   cin>>t;
   ll c=0;
   while(t--)
   {
       c=0;
       cin>>y;
       a= 700;
       if(y<a)
       {
           a= y-1;

       }
       c=0;
       for(i=1;i<=a;i++)
       {
           ll z1= sqrt(y-i);
           if(z1<0)
            break;
         c+=z1;
       }
       cout<<c<<"\n";
   }
    return 0;
}
