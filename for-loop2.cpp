#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
	cin>>n;
	for(int i=0;i<5;i++){
		cout<<"hi"<<endl;
		cout<<"gg"<<endl;
		continue;
		cout<<"go away"<<endl;
	}
	
	for(int i=0;i<=5;i++){
		cout<<i<<" ";
		i++;
	}
	
	for(int i=0;i<=5;i--){
		cout<<i<<" ";
		i++;
	}
	
	for(int i=0;i<=15;i+=2){
		cout<<i<<" ";
		if(i&1){
			continue;
		}
		i++;
	}
	
	for(int i=0;i<=5;i++){
		for(int j=i;j<=5;j++){
			cout<<i<<" "<<j<<endl;
		}
	}	

	for(int i=0;i<=5;i++){
		for(int j=i;j<=5;j++){
			if(i+j==10){
				cout<<i<<" "<<j<<endl;
			}	
		}
	}
}    