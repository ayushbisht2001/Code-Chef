#include <bits/stdc++.h>
using namespace std;
typedef  long long int ll ;

int main() {
    
ios::sync_with_stdio(0);
cin.tie(0);

ll chef , emails;

cin>>chef>>emails;

map<string,int> chefs, countries;
map<string , string> chef_cou;

for(int i=0;i<chef;i++)
{string temp1, temp2;
cin>>temp1>>temp2;
chef_cou[temp1] = temp2;
}

for(int i=0;i<emails;i++)
{string temp;
cin>>temp;
++chefs[temp];
++countries[chef_cou[temp]];
}

string ans1,ans2;
ll maxi = 0;
for(auto it = chefs.begin();it!=chefs.end();it++)
{ 
    if(maxi<it->second)
    {
        maxi = it->second;
        ans1 = it->first;  }
}
maxi = 0;
for(auto it = countries.begin();it!=countries.end();it++)
{
    if(maxi<it->second)
    { 
        maxi = it->second;
        ans2 = it->first;}
}

cout<<ans2<<"\n"<<ans1;


	return 0;
}

