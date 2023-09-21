#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
    
    //nCr
int  factorial(int n){ 	
	int fact=1;

	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;

} 
int nCr(int n,int r){
	int num=factorial(n);
	int dem=factorial(r)*factorial(n-r);
	return num/dem;
}
int main(){
	int n,r;
	cin>>n>>r;
	cout<<nCr(n,r)<<endl;		
}

  