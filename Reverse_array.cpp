#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

//reverse of an array
void reverse(int arr[],int n){
	int start=0;
	int end=n-1;

	while(start<=end){
		swap(arr[start],arr[end]); 
		start++;
		end--;
	}
}

void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[6]={1,23,45,69,99,6969};
	int brr[5]={2,3,69,45,97};

	reverse(arr,6);
	reverse(brr,5);

	printArray(arr,6);
	printArray(brr,5);
	
	return 0;
} 

//reverse of an array
vector<int> reverse(vector<int> v){
	int s=0;
	int e=v.size()-1;
	while(s<=e){
		s++;
		e--;

	}
	return v;

}

void print(vector<int> v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";	 
	}
	cout<<endl;
}

int main(){
	vector<int> v;
	v.push_back(12);
	v.push_back(14);
	v.push_back(10);
	v.push_back(2);
	v.push_back(1);

	vector<int> ans=reverse(v);
	cout<<"printing the array: "<<endl;
	print(ans);
}