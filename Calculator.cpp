l#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main(){

    //calculator
	int a,b;
	cout<<"Enter the value of a : ";
	cin>>a;

	cout<<"Enter the value of b : ";
	cin>>b;

	char op;
	cout<<"enter operation you want to perform : ";
	cin>>op;

	switch(op){
		case '+' : cout<<"Addition of a+b : "<<(a+b)<<endl;
			break;
		case '-' : cout<<"Subtraction of a-b : "<<(a-b)<<endl;
			break;
		case '*':  cout<<"Multiply of a*b : "<<(a*b)<<endl;	
			break;
		case '/' : cout<<"Divide of a/b : "<<(a/b)<<endl;	
			break;
		case '%' : cout<<"Mode of a%b : "<<(a%b)<<endl;
			break;	
		default :  cout<<"Enter valid operation : "<<endl;
	}

    //Money Transfer
    int n;
	cout<<"Enter the accoumnt : ";
	cin>>n;

	int op;
	cout<<"enter operation you want to perform : ";
	cin>>op;
	switch(op){
		case 1: cout<<(n/1000)<<endl;
			break;
		case 2 : cout<<(n/500)<<endl;
			break;
		case 3 : cout<<(n/50)<<endl;
			break;
		case 4 : cout<<(n/10)<<endl;
			break;
		default : cout<<"UPI lele"<<endl;			
 	}

}