#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

//Recursion
//Factorial
int factorial(int n){
	//base count
	if(n==0)
		return 1;
	
	//int chotti=factorial(n-1);
	//int badi=n*chotti;

	return n*badi(n-1);

}

int main(){
	int n;
	cin>>n;

	int ans= factorial(n);
	
	cout<<ans<<endl; 

	return 0;
}

// Factorial
int power(int n){
	if(n==0)
		return 1;
	return 2*power(n-1);

}

int main(){
	int n;
	cin>>n;
	int ans=power(n);
	cout<<ans<<endl;

	return 0;
}
