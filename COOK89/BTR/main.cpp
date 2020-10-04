#include <bits/stdc++.h>
#define f(i,a,b) for((int) i=(int)a;i<(int)b;i++)
#define ml 9999999999999
#define mi 99999
#define li -99999
#define co cout
#define ci cin
#define  msl map<string,long long int>
#define  msi map<string,int>
#define  mi map<int,int >
#define  ms map<string,string>
#define  ml map<long long int ,long long int>
#define vl vector<long long int >
#define  vi vector<int>
#define vs vector<string>
#define  sl set<long long int>
#define  si set<int>
#define ss set<string>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
int main()
{
ll t,i,a,b,c;
cin>>t;
while(t--)
{
    cin>>a>>b;
    a= (ll)pow(a,b);
    c=0;
    cout<<a<<"\n";
  while(1)
  {
      c=0;
      while(a>0)
      {
          c+=(a%10);
          a/=10;
      }
      if(c<10)
        break;
      else a=c;
  }
    cout<<c<<"\n";
}
    return 0;
}
