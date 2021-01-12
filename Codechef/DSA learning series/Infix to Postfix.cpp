#include<bits/stdc++.h>

using namespace std;

#define ll long long int



int outp(char ch)
{ 
    if(ch=='+' || ch =='-')
    return 1;
    else
    if(ch=='*' || ch=='/')
    return 3;
    else
    if(ch=='^')
    return 5;
    else
    if(ch=='(')
    return 7;
    else
    if(ch==')')
    return 0;
    return 0;
    
}

int inp(char ch)
{    if(ch=='+' || ch =='-')
    return 2;
    else
    if(ch=='*' || ch=='/')
    return 4;
    else
    if(ch=='^')
    return 6;
    else
    if(ch==')')
    return 0;
    else
    return 0;
    
    
}



 


 
int main() {
 int t;
  cin >> t;
  while(t--)
  { ll n;
cin>>n;
string s;
cin>>s;
stack<char> stk;

for(int i=0;i<s.size();i++)
{ 
  if(isalpha(s[i]))
  cout<<s[i];
  else
   if( stk.empty() || outp(s[i])>inp(stk.top()))
        stk.push(s[i]);
    else
    if(outp(s[i])<inp(stk.top()))
      {
	  while(!stk.empty() && outp(s[i])<inp(stk.top()) )
    {	
        cout<<stk.top();
        stk.pop();
        
    }
    if(!stk.empty() && outp(s[i])==inp(stk.top()))
    stk.pop();
    else
    stk.push(s[i]);
	  }
     
       
    else if (s[i] == ')') {  
            while (!stk.empty() && stk.top() != '(') {  
                printf("%c", stk.top());  
                stk.pop();   
            }         
            stk.pop();  
        }  
      
        
}
while(!stk.empty() )
{ 
 cout<<stk.top();
stk.pop();}
  cout<<endl;
  }
  return 0;
}
