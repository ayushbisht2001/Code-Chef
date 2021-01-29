#include <bits/stdc++.h>
using namespace std;
# define ll long long int
int main() {

ll t;
cin>>t;

while(t--)
{
    string s;
    cin>>s;
    ll size = s.length();
ll arr[size] = {0};
stack<pair<char,int> > stk;

for(int i=0;i<s.length();i++)
{ 
    if(s[i]=='<')
{   stk.push(make_pair(s[i],i));
    }
else
{
    if(stk.size()>0&&stk.top().first=='<')
    { arr[stk.top().second]=1;
    arr[i] = 1;
     stk.pop();
    }
}
}
s.clear();

ll count = 0,ans=0;
for(int a: arr)
if(a==1)
++ans;
else
break;
cout<<ans<<endl;
}

	return 0;
}

