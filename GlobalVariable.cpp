#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;


//GlobalVariables
int score=15;

void a(int& i){
	cout<<score<<"in a"<<endl;

	char ch='a';
	cout<<i<<endl;
	//b(i);
}

void b(int& i){

	cout<<score<<"in b"<<endl;
	cout<<i<<endl;
}

int main(){
	cout<<score<<"in main"<<endl;
	int i=5;
	a(i);
	b(i); 
	{
		int i=2;
		cout<<i<<endl;
	}
	cout<<i<<endl;
	return 0;
}

//inline Function
inline int getmax(int& a,int& b){
	return (a>b)? a:b;

}
int main(){
	int a=2,b=4;
	int ans=0;
	
	ans=getMax(a,b);
	cout<<ans<<endl;

	a=a+3;
	b=b+1;
	
	ans=getMax(a,b);
	cout<<ans<<endl;

	return 0;
}
