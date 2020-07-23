// prime numbers from 1 to n using sieve method
#include<bits/stdc++.h>
using namespace std;
#define  size 1002
int a[size];
void seive(){
	
	int i,j,root;
	root=sqrt(size);
	a[1]=1;
	
	for(i=2;i<=root;i++){
		for(j=2;i*j<=size;j++){
			a[i*j]=1;
		}
	}
}
		

int main(){
	seive();
    
     int n;
     	cin>>n;
	 for(int i=1;i<=n;i++)
	 	if(!a[i])
	 		cout<<i<<" ";
	 		
	return 0;
}
