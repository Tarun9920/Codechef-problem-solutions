#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll total=0;
int main()
{
    ll lua,t,n,i,j,k,q,mid,f,left,right,mimi;
    cin>>t;
    for(q=0;q<t;q++)
    {
        total=0;
        cin>>n;
        ll A[n];
        for(i=0;i<n;i++)
        {
            cin>>A[i];
            total+=A[i];
        }
        mimi=total;
        for(i=0;i<n;i++)
        {
            mid=i;
            left= min(i,n-i);
            f=total;
            while((left--)>=0)
            {
                f=total;
                if(A[mid]< (left+1))
                    continue;

                f=-(left+1);
           ll     N= left;
                for(int qq=mid-1;qq>=left;qq--)
                {
                    if(A[qq]>= N)
                    {
                        f-=N;
                        N--;
                    }
                    else {f=total;break;}
                }
                N= left;
                for(int qq= mid+1;qq<= mid+left;qq++)
                {
                    if(A[qq]>=N)
                    {
                        f-=N;
                        N--;
                    }
                    else {f=total;break;}
                }
                mimi= min(f,total);
            }

        }
        cout<<mimi<<"\n";
    }
    return 0;
}
