#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
//referene variable

void update2(int& n){
		n++;
	}
	void update1(int n){
		n++;
	}

int main(){

	
	int a=7;
	int *c=&a;
	c=c+3;
	cout<<c<<endl;


	int n=5;
	cout<<"Before "<<n<<endl;
	update2(n);
	cout<<"After "<<n<<endl;
	return 0;
}
