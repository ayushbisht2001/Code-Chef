#include <iostream>
using namespace std;

#define ll long long int
int main() {

ll t=0;
cin>>t;
while(t--)
{
     ll n = 0;
    cin>>n;
ll arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
for(int i=1;i<n;i++)
{arr[i] = min(arr[i],arr[i-1]);
}
cout<<endl;

ll deduct = 0,ans=0;
int i=n;
for( i=n;i>=1;i--)
{   if(arr[i-1]-deduct>0)
    {arr[i-1] -= deduct;
    ans +=arr[i-1]*i;
    deduct +=arr[i-1];    
    }
    
    }

cout<<ans<<endl;

     
 }


	return 0;
}

