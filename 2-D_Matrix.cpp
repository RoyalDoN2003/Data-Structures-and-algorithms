#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

//creating 2-D matrix
int main(){
	int n;
	cin>>n;

	//2-D array
	int** arr=new int*[n];
	for(int i=0;i<n;i++){
		arr[i]=new int[n];
	} 
	//taking input
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	//taking output
	
	cout<<endl;
	for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<arr[i][j]<<" ";
			}	
		cout<<endl;
	}
}

//Jaggered array

//Different row and column
int main(){
	int row;
	cin>>row;
	
	int col;
	cin>>col; 

	//2-D array
	int** arr=new int*[row];
	for(int i=0;i<row;i++){
		arr[i]=new int[col];
	} 
	//taking input
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>arr[i][j];
		}
	}
	//taking output
	
	cout<<endl;
	for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				cout<<arr[i][j]<<" ";
			}	
		cout<<endl;
	}

	//releasing memory
	for(int i=0;i<row;i++){
		delete [] arr[i];
	}
	delete []arr;

}
