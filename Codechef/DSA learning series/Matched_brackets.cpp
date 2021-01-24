# include<bits/stdc++.h>
using namespace std;

# define ll long long int
int main()
{ 
 ll n = 0;
 cin>>n;
int ch[n];
 for(int i=0;i<n;i++)
 cin>>ch[i];
 
 list< pair<int,int> > stk;
 
 ll n_depth=0,f_pos=0,max_len=0,ml_f_pos=0;
 
 for(int i=0;i<n;i++)
 { 
  if(ch[i]==1)
  stk.push_back(make_pair(ch[i],i+1));
  else
  { if(stk.size()>n_depth)
    { n_depth = stk.size();
      f_pos = stk.back().second; 
    }
    stk.pop_back();  }
 }
 
ll  i=0,flag=1,maxi=0;
ll count = 0;
 stk.clear();
 ll ind=0;
 
 list<pair<int,int> > stko;
while(i<n)
 { 
 if(ch[i]==1)
{ ++count;
 stko.push_back(make_pair(ch[i],i+1));
}
else
{ ++count;
    if(stko.size()==1)
    { ind = stko.front().second;
      if(count>max_len)
       {max_len = count;
       ml_f_pos = ind;
       }
       count = 0;
    } 
    stko.pop_back();
}
++i;
 }
 
 printf("%d %d %d %d",n_depth,f_pos,max_len,ml_f_pos);

    return 0;
}


