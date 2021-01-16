#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int max(int a,int b)
{   if(a>=b)
    return a;
    else
    return b;
}

int main() {
ll t;
cin>>t;
while(t--)
{
ll n ,k,ans=1;
cin>>n>>k;

int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];

map<int,int> hash;
int i=0,j=0;
ll count = 0;
while(j<n)
{ 
if(hash[arr[j]]==0)
count +=1;
++hash[arr[j]];	
if(count >=k)
{  while(count >= k)
{ if(hash[arr[i]]==1)
	count -=1;	
--hash[arr[i]];	
++i;}
ans = max(ans,j-i+1);
}
ans = max(ans,j-i+1);
++j;
}
ans = max(ans,j-i);
cout<<ans<<endl;
}
return 0;

}
