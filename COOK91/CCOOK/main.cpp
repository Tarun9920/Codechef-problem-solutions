#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t;
//cin>>t;
//while(t--)
{
    int n;
    cin>>n;
    int p;
    for(int i=0;i<n;i++)
    {
        p=0;
        for(int j=0;j<5;j++)
        {
            int k;
            cin>>k;
            p=p+k;
        }
        if(p==0)
            cout<<"Beginner";
            else if(p==1)
            cout<<"Junior Developer";
            else if(p==2)
            cout<<"Middle Developer";
            else if(p==3)
            cout<<"Senior Developer";
            else if(p==4)
            cout<<"Hacker";
            else cout<<"Jeff Dean";
        cout<<"\n";
    }
}
    return 0;
}
