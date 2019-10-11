
#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define mod 1000000007

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);


   ll n;

   cin>>n;

   ll M[n][n],num;

   char c;

   for(ll i=0;i<n;i++)
   {
       for(ll j=0;j<n;j++)
       {
           cin>>c;

           if(c=='X')
           num = 1;
           else if(c=='.')
           num = 0;

           M[i][j] = num;

       }
   }

   ll count = 0;

   for(ll i=1;i<n-1;i++)
   {
       for(ll j=1;j<n-1;j++)
       {
           if( M[i][j]==M[i-1][j-1] && M[i][j]==M[i-1][j+1] && M[i][j] ==M[i+1][j-1] && M[i][j] == M[i+1][j+1] && M[i][j]==1)
           count++;
       }
   }

   cout<<count<<endl;

}
