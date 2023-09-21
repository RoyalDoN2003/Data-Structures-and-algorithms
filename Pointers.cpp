#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

//pointer
int main(){
	double num=5;
	double *ptr=&num;
	cout<<"Enter the address : "<<ptr<<endl;
	cout<<"Enter the value: "<<*ptr<<endl;
	
	cout<<"enter integer :"<<sizeof(ptr)<<endl;
	cout<<"enter pointer :"<<sizeof(*ptr)<<endl;
}	

//pointer impomtant
int main(){
	int num=5;
	int a=num;
	cout<<"a before "<<num<<endl;
	a++;
	cout<<"a after "<<num<<endl;
	int *q=p;
	cout<<p<<"-"<<q<<endl;
	cout<<*p<<"-"<<*q<<endl;
	int i=3;
	int *t=&i;
	cout<<(*t)++<<endl;
}