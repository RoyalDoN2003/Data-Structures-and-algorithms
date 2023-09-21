#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
	cin>>n;
	int i=2;
	while (i<n)
	{

		if(n%i==0){
			cout<<"not prime"<<endl;
		}
		else{
			cout<<"prime"<<endl;
		}
		i=i+1;
	}
}

// Using Function

bool primeNumber(int n){
	for(int i=2;i<=n;i++){
		if(n%2==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n;
	cin>>n;
	if (primeNumber(n)){
		cout<<"is prime "<<endl;
	}
	else{
		cout<<"Not prime"<<endl;
	}

	return 0;
}