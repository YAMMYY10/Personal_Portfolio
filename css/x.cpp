#include <bits/stdc++.h>
using namespace std;

int palin(int x)
{
    int r,sum=0,temp;   ;
    temp=x;   
    while(x>0)    
{    
 r=x%10;    
 sum=(sum*10)+r;    
 x=x/10;    
}    
if(temp==sum)    
return 1;    
else    
return 0;   
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	 int n,num;
	 cin>>n;
	 int a[n];
	 for(int i=0;i<n;i++)
	 cin>>a[i];
	 int count=0;
	 for(int i=0;i<n;i++)
	 {
	     for(int j=i;j<n;j++)
	     {
	         int p=a[i];int q=a[j];
	         num=p^q;
	         if(1==palin(num))
	         count++;
	     }
	 }
	 cout<<count<<endl;
	 
	}
	return 0;
}