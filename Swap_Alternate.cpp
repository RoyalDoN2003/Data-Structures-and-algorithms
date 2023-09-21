#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

//swap alternate
void printArray(int arr[],int n){
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}cout<<endl;

}

void swapArray(int arr[],int size){
		for(int i=0;i<size;i++){
			if(i+1<size){
				swap(arr[i],arr[i+1]);
			}
		}
}

int main(){
	int even[8]={5,2,9,8,7,34,69,96};
	int odd[5]={12,3,45,76,90};

	swapArray(even,8);
	printArray(even,8);
	
	cout<<endl;

	swapArray(odd,5);
	printArray(even,5);

	return 0;
}