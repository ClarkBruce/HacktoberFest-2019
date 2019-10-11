
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

   ll a[n];

   for(ll i=0;i<n;i++)
   {
       cin>>a[i];
   }

   ll sum = 0;

   sort(a,a+n);

   int i,j;

   for(i=0,j=n-1;i<j;i++,j--)
   {
        sum += pow(a[i]+a[j],2);
   }

   cout<<sum<<endl;

}
