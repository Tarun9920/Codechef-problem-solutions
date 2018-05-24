#include <bits/stdc++.h>
using namespace std;
typedef int ll;
ll maxi;

int main()
{
   ll i,j,k,t,q,n,m,A[500][500],B[500][500];
   cin>>t;
   for(q=0;q<t;q++)
   {
    cin>>n>>m;
       maxi=0;
       for(i=0;i<n;i++)// row
       {
           for(j=0;j<m;j++)// col
           {
               cin>>A[i][j];
               if(maxi <A[i][j])
               {
                   maxi= A[i][j];
               } //   B[i][j]=A[i][j];// copy

           }
       }
       queue<ll> q1,q2;
       for(i=0;i<n;i++)
       {
           for(j=0;j<m;j++)
           {
               if(A[i][j]==maxi)
               {
                   q1.push(i);q2.push(j);
                   B[i][j]=0;
               }
               else B[i][j]= 20000;
           }
       }
       while(!q1.empty())
       {
          i=q1.front();j= q2.front();
          q1.pop();q2.pop();

             if(i>0 && j>0)
    {
        if(B[i][j]<B[i-1][j-1] && A[i-1][j-1]!=maxi)//1
        {
            A[i-1][j-1]= maxi;
            B[i-1][j-1]=B[i][j]+1;
            q1.push(i-1);q2.push(j-1);
        }
    }
    if(i>0)// i-1,j
    {
        if(B[i][j]<B[i-1][j] && A[i-1][j]!=maxi)//2
        {
            A[i-1][j]= maxi;
            B[i-1][j]=B[i][j]+1;
            q1.push(i-1);q2.push(j);
        }
    }
    if(i>0 && j+1 < m) // i-1,j+1
    {
        if(B[i][j]<B[i-1][j+1]  && A[i-1][j+1]!=maxi)//3
        {
             A[i-1][j+1]= maxi;
            B[i-1][j+1]=B[i][j]+1;
            q1.push(i-1);q2.push(j+1);
        }
    }
    if(j+1 < m)
    {
        if(B[i][j]<B[i][j+1] && A[i][j+1]!=maxi)//4
           {
                A[i][j+1]= maxi;
            B[i][j+1]=B[i][j]+1;
            q1.push(i);q2.push(j+1);
           }
    }
    if(i+1 <n && j+1< m)
    {
       if(B[i][j]<B[i+1][j+1]&& A[i+1][j+1]!=maxi)//5
       {
            A[i+1][j+1]= maxi;
            B[i+1][j+1]=B[i][j]+1;
            q1.push(i+1);q2.push(j+1);
       }
    }
    if(i+1<n)
    {
        if(B[i][j]<B[i+1][j]&& A[i+1][j]!=maxi)//6
        {
             A[i+1][j]= maxi;
            B[i+1][j]=B[i][j]+1;
            q1.push(i+1);q2.push(j);
        }
    }
    if(i+1 <n && j>0)
        if(B[i][j]<B[i+1][j-1]&& A[i+1][j-1]!=maxi)//7
        {
             A[i+1][j-1]= maxi;
            B[i+1][j-1]=B[i][j]+1;
            q1.push(i+1);q2.push(j-1);
        }
    if(j>0)
    {
        if(B[i][j]<B[i][j-1]&& A[i][j-1]!=maxi)//8
        {
            A[i][j-1]=maxi;
            B[i][j-1]=B[i][j]+1;
            q1.push(i);q2.push(j-1);
        }
    }
       }
       int aa=0;
       for(i=0;i<n;i++)
       {
           for(j=0;j<m;j++)
           {
               aa= max(aa,B[i][j]);
           }
       }
       cout<<aa<<"\n";
   }
    return 0;
}
