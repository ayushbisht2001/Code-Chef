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
 
 list<int> stko;
while(i<n)
 {
if(ch[i]==1)
{ 
 if(flag)
 {ind = i+1;
 flag = 0;
  }
  stko.push_back(ch[i]);
 
}
else
{
stko.pop_back();
if(stko.size()==0)
{flag =1;
if(max_len<count)
{    max_len = count;
    ml_f_pos = ind;
}
count = 0;
}
}
 ++count;
++i;

 }
 if(max_len%2!=0)
 max_len += 1;
 
 
 printf("%d %d %d %d",n_depth,f_pos,max_len,ml_f_pos);
    return 0;
}


