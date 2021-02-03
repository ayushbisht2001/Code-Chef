#include <bits/stdc++.h>
using namespace std;
# define ll long long int

int main() {

 ll t = 0;
 cin>>t;
 while(t--)
 { 
  ll n,p;
  cin>>n>>p;
  ll sum = 0;
 priority_queue<int> pq;
  for(int i=0;i<n;i++)
  { int k;
  cin>>k;
  pq.push(k);
  }
 ll count = 0; 

while(p>0 && !pq.empty())
{int atk = pq.top(); 
 p -= atk;
 atk = atk/2;
 pq.pop();
 if(atk>0)
 pq.push(atk);
 ++count;
}
 
 if(pq.empty() && p!=0)
 cout<<"Evacuate"<<endl;
 else
 cout<<count<<endl;
 }
	return 0;
}

