#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

//Linear search
bool search(int arr[],int size,int key){
	for(int i=0;i<size;i++){
		if(arr[i]==key){
			return 1;
		}
	}

	return 0;
}

int main(){
	int arr[10]={1,2,3,4,55,6,78,69,99,-100};
	
	cout<<"Enter the Element : ";

	int key;
	cin>>key;

	bool found=search(arr,10,key);

	if(found){
		cout<<"Key is persent. "<<endl;
	}
	else{
		cout<<"Key is not persent. "<<endl;
	}
	return 0;
}

