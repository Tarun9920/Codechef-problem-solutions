#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,q,i,j,k,s,m,l;
    cin>>t;
    bool B[200];
    char A[200];
    for(q=0;q<t;q++)
    {
        cin>>A;
        k=s=m=0;
        memset(B,true,sizeof(B));
        for(i=0;i<strlen(A);i++)
        {
            if(A[i]=='s')
            {
                s++;
            }
            else if(A[i]=='m')
            {
                m++;
                if(i-1 >=0 && A[i-1]=='s' && B[i-1]== true)
                {
                    k++;
                    B[i-1]=false;
                }
                else if(i+1 < strlen(A) && A[i+1]=='s' && B[i+1]== true)
                    {
                        k++;
                        B[i+1]=false;
                    }
            }
        }
        if(m > (s-k))
        {
            cout<<"mongooses\n";
        }
        else if(m== (s-k))
        {
            cout<<"tie\n";
        }
        else cout<<"snakes\n";
    }

    return 0;
}
