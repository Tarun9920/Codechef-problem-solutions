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
    int t;
    ci>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
       msi mymap;
        msi ::iterator it;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            mymap[s]++;
        }
        int c=-1;
        for(it= mymap.begin();it!=mymap.end();it++)
        {
            if(it->second> c)
               {
                    c= it->second;
                    s= it->first;
               }
        }
        n=0;
        for(it=mymap.begin();it!= mymap.end();it++)
        {
            if(it->second == c)
                n++;
        }
        if(n==1)
            co<<s<<"\n";
        else co<<"Draw\n";
    }
    return 0;
}
