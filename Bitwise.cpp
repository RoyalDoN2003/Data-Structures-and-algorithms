#include<bits/stdc++.h>
using namespace std;
int main(){

    // Question-1
    int a=3,b=4;
	cout<<(a&b)<<endl;
	cout<<(a|b)<<endl;
	cout<<(~a)<<endl;
	cout<<(a^b)<<endl;

	// Question-2
	cout<<(17>>1)<<endl;
	cout<<(17>>2)<<endl;
	cout<<(19<<2)<<endl;
	cout<<(19<<1)<<endl;

	// Question-3
	int i=3;
	cin>>i; 
	cout<<(i++)<<endl;
	cout<<(i--)<<endl;
	cout<<(++i)<<endl;
	cout<<(--i)<<endl;

    // Question-4
    int a,b=1;
	a=10;
	if(++a)
		cout<<b<<endl;
	else	
		cout<<++b;

    // Question-5
    int n;
	cin>>n;
	
	for	(int i=1;i<=n;i++){
		cout<<i<<endl;
	}

    // Question-6
    int n;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=i;
	}	
	cout<<sum;


}