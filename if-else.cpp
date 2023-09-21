#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    //Question-1
    int a=2;
	cin>>a;
	if(a>0)
		cout<<"positive"<<endl;
	else
		cout<<"negative"<<endl;	

	//Question-2	
	int a,b;
	cin>>a>>b;
	if(a>b)
		cout<<"A is greater then b"<<endl;
	else if(b>a)	
		cout<<"B is greater then a"<<endl;
	
    //Question-3
	int a=2;
	int b=a+1;
	if((a=3)==b)
		cout<<a;
	else
		cout<<a+1;

    
}