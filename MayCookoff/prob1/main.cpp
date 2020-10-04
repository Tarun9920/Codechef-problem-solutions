#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  int a;
   char s[100];
    cin>>t;

    for(int q=0;q<t;q++)
    {
        int rm,m,e,b;
        for(int i=0;i<4;i++)
        {
            cin>>s;
            if(s[0]=='B')
            {
                cin>>b;
            }
            else if(s[0]=='E')
            {
                cin>>e;
            }
            else if(s[0]=='R')
            {
                cin>>rm;
            }
            else cin>>m;
        }
        if(rm<m && b>e)
        {
            cout<<"Barcelona\n";
        }
        else cout<<"RealMadrid\n";
    }
    return 0;
}
