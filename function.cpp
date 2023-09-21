#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;


    //function
	int a,b;
	cin>>a>>b;
	int answer=1;

	for (int i=1;i<=b;i++){
		answer=answer*a;
	}
	cout<<answer<<endl;

    int power(int a,int b){
	
	int answer =1;

	for(int i=1;i<=b;i++){
		answer=answer*a;
	}
	return answer;
}
int main(){
	int a,b;
	cin>>a>>b;
	int answer=power(a,b);
	cout<<answer<<endl;

}    



int printnum(int n){
	//functon body
	for(int i=1;i<=n;i++){
		cout<<i<<" ";
	}
}
int main(){
	//function call
	int n;
	cin>>n;
	printnum(n);

	return 0;
}

//
void dummy(int n){
	n++;
	cout<<"Enter n : "<<n<<endl;
}

int main(){
	int  n;
	cin>>n;
	dummy(n);
	cout<<"number is n: "<<n<<endl;	

	return 0;
}
	
int main(){
	int number[12];
	cout<<"Enter the value : "<<number[15]<<endl;

	return 0;
} 
	
int main(){
	int num[5]={1,2,3,4,5};
	cout<<"Enter the value : "<<num[4]<<endl;

	return 0;
}