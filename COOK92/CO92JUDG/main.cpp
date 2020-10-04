#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
       // int A[n],B[n];
        int s1,s2,s3,b;
        s1=s2=s3=0;
        for(i=0;i<n;i++)
        {
            cin>>b;
            s1+=b;
            if(b>s3)
                s3=b;
        }
        s1-=s3;
        s3=0;
        for(i=0;i<n;i++)
        {
            cin>>b;
            s2+=b;
            if(b>s3)
                s3=b;
        }
        s2-=s3;
        if(s1<s2)
        {
            cout<<"Alice";
        }
        else if(s1==s2)
        {
            cout<<"Draw";
        }
        else cout<<"Bob";
        cout<<"\n";
    }
    return 0;
}
