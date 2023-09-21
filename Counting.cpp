#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;


//Printing counting
void print(int n){
	//base case 	
	if(n==0)
		return;

	print(n-1);
	
	cout<<n<<endl;
} 

int main(){
	int n;
	cin>>n;
	cout<<endl;
	print(n);
	return 0;

}
