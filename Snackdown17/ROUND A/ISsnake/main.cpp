#include<bits/stdc++.h>
#define N 100000
 using namespace std;
 char A[2][100000];
 int total=0, sol[2][N];
int solveKTUtil(int x, int y, int movei,
                int xMove[],  int yMove[],int n);

/* A utility function to check if i,j are valid indexes
   for N*N chessboard */
bool isSafe(int x, int y, int n)
{
    return ( x >= 0 && x < 2 && y >= 0 &&
             y < n && sol[x][y] == -1  && A[x][y]=='#');
}

/* A utility function to print solution matrix sol[N][N] */

bool solveKT(int n)
{
    /* Initialization of solution matrix */
    for (int x = 0; x < 2; x++)
        for (int y = 0; y < n; y++)
            sol[x][y] = -1;

    int xMove[4] = { 1, -1, 0,0};
    int yMove[4] = {0,0,1,-1 };


 int s1,s2;
 s1=s2=-1;
 for(int i=0;i<n;i++)
 {
     if(A[0][i]=='#')
        s1=i;
     if(A[1][i]=='#')
        s2=i;
 }
  int aa=-1;
  if(s1!=-1)
  {
       sol[0][s1]  = 0;
    if (solveKTUtil(0, s1, 1, xMove, yMove,n) == false)
    {
      aa=10;
    }
  }
  if(aa == 10)
  {
       for (int x = 0; x < 2; x++)
        for (int y = 0; y < n; y++)
            sol[x][y] = -1;

       if(s2!=-1)
        {
            sol[1][s2]=0;
            if (solveKTUtil(1, s2, 1, xMove, yMove,n) == false)
            return false;
        }
  }
       // printSolution(sol);
    return true;
}

/* A recursive utility function to solve Knight Tour
   problem */
int solveKTUtil(int x, int y, int movei,
                int xMove[4], int yMove[4],int n)
{
   int k, next_x, next_y;
   if (movei == total)
       return true;

   /* Try all next moves from the current coordinate x, y */
   for (k = 0; k < 4; k++)
   {
       next_x = x + xMove[k];
       next_y = y + yMove[k];
       if (isSafe(next_x, next_y,n))
       {
         sol[next_x][next_y] = movei;
         if (solveKTUtil(next_x, next_y, movei+1,
                         xMove, yMove,n) == true)
             return true;
         else
             sol[next_x][next_y] = -1;// backtracking
       }
   }

   return false;
}
int main()
{
    int t,n,i,k,j;
    cin>>t;
    for(int q=0;q<t;q++)
    {
        cin>>n;
        cin>>A[0];
        cin>>A[1];
        total=0;
        for(i=0;i<n;i++)
        {
            if(A[0][i]=='#')
            {
                total++;
            }
            if(A[1][i]=='#')
                total++;
        }
     if( solveKT(n)== true)
        cout<<"yes\n";
     else cout<<"no\n";
        }
    return 0;
}
