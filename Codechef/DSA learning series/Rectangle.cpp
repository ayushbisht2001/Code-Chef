#include <bits/stdc++.h>
using namespace std;
# define ll long long int

# Medium problem
int main() {

ll t;
cin>>t;


vector<pair<int,int> >  vec;
// vec.push_back(make_pair(0,0));
vec.push_back(make_pair(0,500));
// vec.push_back(make_pair(100000,0));
vec.push_back(make_pair(100000,500));
for(ll i=0;i<t;i++)
{int x,y;
cin>>x>>y;
vec.push_back(make_pair(x,y));
}

sort(vec.begin(),vec.end());
ll ans = 0;
for(auto it : vec)
cout<<it.first<<"  "<<it.second<<endl;
for(int i=0;i<vec.size()-1;i++)
{ 
  
  for(int j=i+1;j<vec.size();j++)
{
    if(vec[j].second<vec[i].second)
    { ll val = (vec[j-1].first-vec[i].first)*(vec[i].second);
    ans = max(ans,val);
    // break;
    }
        }

}  
 
 cout<<ans<<endl;   


	return 0;
}

