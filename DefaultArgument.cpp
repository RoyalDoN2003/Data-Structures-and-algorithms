#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;


//Default Arguments
void print(int arr[],int n,int start=0){
	for(int i=start;i<n;i++){
		cout<<arr[i]<<endl;;
	}
}
int main(){
	int arr[5]={1,2,3,4,5};
	int size=5;

	print(arr,size);
	cout<<endl;
	print(arr,size,2);

	return 0;
}
