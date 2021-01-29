#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {

int t=0;
cin>>t;
while(t--)
{
    ll n;
cin>>n;
n = 2*n;
char ch[n];
cin>>ch;
ll Ascore=0,Bscore=0;
ll i=1;
for(i=1;i<=n;i++)
{ 
 if(i%2==0 && ch[i-1]=='1')
 Bscore +=1;
 if(i%2!=0 && ch[i-1]=='1')
 Ascore +=1;
 double c = (double)(n-i)/2;
if(Ascore> Bscore+ceil(c))
{ cout<<i<<endl;
break;
    }
if(Bscore > Ascore + c)
{ 
    cout<<i<<endl;
    break;}
}
if(i>n)
cout<<n<<endl;

}
	return 0;
}

