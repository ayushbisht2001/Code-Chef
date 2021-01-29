# include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
ll n,m;
cin>>n>>m;
vector<int> vec1(n),vec2(m);

for(int i=0;i<n;i++)
{  cin>>vec1[i];
    
}

for(int i=0;i<m;i++)
{cin>>vec2[i];

}
size_t maxi = max_element(vec2.begin(),vec2.end()) - vec2.begin();
size_t mini = min_element(vec1.begin(),vec1.end()) - vec1.begin();

for(size_t i=0;i<vec2.size();i++)
cout<<mini<<" "<<i<<endl;

for(size_t i=0;i<vec1.size();i++)
if(i!=mini)
cout<<i<<" "<<maxi<<endl;



return 0;     
}
