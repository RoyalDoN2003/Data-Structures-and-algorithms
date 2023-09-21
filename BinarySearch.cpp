#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

//binary search
int binarysearch(int arr[],int size,int key){
	int start=0;
	int end=size-1;

	int mid= start+(end-start)/2;

	while(start<=end){
		if(arr[mid]==key){
			return mid;
		}
		if(key>arr[mid]){
			start=mid+1;

		}
		else{
			end=mid-1;

		}
		mid=start+(end-start)/2; 
	}
	return -1;
}

int main(){
	int even[8]={1,3,4,5,6,8,9,7};
	int odd[5]={1,2,3,5,9}; 
	
	int index = binarysearch(even,8,9);
	cout<<"index of "<<index<<endl;

	int index1 = binarysearch(odd,5,3);
	cout<<"index of"<<index1<<endl;
}