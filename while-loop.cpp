#include<bits/stdc++.h>
using namespace std;
int main(){

    // Question-1
    int n;
	cin>>n;
	int i=1;
	while(i<=n){
		cout<<i<<" ";
		i=i+1;	
	}

    // Question-2
	int n=0;
	cin>>n;
	int sum=0;
	int i=1;
	while (i<=n){
		sum=sum+i;
		i=i+1;
	}
	cout<<sum;

    // Question-3
	int n=0;
	cin>>n;
	int sum=0;
	int i=2;
	while(i<=n){
		sum=sum+i;
		i=i+2;
	}	
	cout<<sum;

    // Question-4
    int frahent;
	cin>>frahent;
	float celsius=((frahent-32)*5)/9;
	cout<<celsius<<endl;

}