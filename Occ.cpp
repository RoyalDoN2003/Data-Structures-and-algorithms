#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main(){


int firstOcc(int arr[],int size,int key){
	int start=0;
	int end=size-1;
	int ans=-1;
	int mid= start+(end-start)/2;

	while(start<=end){
		if(arr[mid]==key){
			ans=mid;
			end=mid-1;
		}
		if(key>arr[mid]){
			start=mid+1;

		}
		else{
			end=mid-1;

		}
		mid=start+(end-start)/2; 
	}
	return ans;
}
int lastOcc(int arr[],int size,int key){
	int start=0;
	int end=size-1;
	int ans=-1;
	int mid= start+(end-start)/2;

	while(start<=end){
		if(arr[mid]==key){
			ans=mid;
			start=mid+1;
		}
		if(key>arr[mid]){
			start=mid+1;

		}
		else{
			end=mid-1;

		}
		mid=start+(end-start)/2; 
	}
	return ans;
}

int main(){
	
	int even[5]={1,2,3,5,9}; 
	cout<<"First Occurrence of 3 is "<<firstOcc(even,5,3)<<endl;
	cout<<"Lasr Occurrence of  3 is "<<lastOcc(even,5,9)<<endl;
	return 0;
}

}