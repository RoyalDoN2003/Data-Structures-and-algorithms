#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
//Pivot array
int getPivot(int arr[],int n){
	int s=0,e=n-1;
	int mid=s+(e-s)/2;

	while(s<e){

		if(arr[mid]>=arr[0]){
			s=mid+1;
		}
		else{
			e=mid;
		}
		mid=s+(e-s)/2;
	}
	return s;
}	

int main(){
	int arr[8]={1,2,3,4,5,6	,7,8};
	cout<<"Pivot array "<<getPivot(arr,8)<<endl;

	return 0;
}