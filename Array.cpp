#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

void update(int arr[],int n){
	cout<<"Inside th function : "<<endl;

	//updating array
	arr[0]=120;

	for(int i=0;i<3;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;

	cout<<"Going back to main function : "<<endl;
}

int main(){
	int arr[3]={1,2,3};
	update(arr,3);

	for(int i=0;i<3;i++)
		cout<<arr[i]<<" ";


	return 0;
}

