#include<bits/stdc++.h>
using namespace std;
int main(){
    	
    //fibbonicci
	
	int n;
	cin>>n;
	int a=0;
	int b=1;
	for(int i=1;i<=n;i++){
		int num=a+b;
		cout<<num<<" ";
		a=b;
		b=num; 
	}
}    