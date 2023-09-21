#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;


    int getMax(int Num[],int n){
	int max=INT_MIN;
	for(int i=0;i<n;i++){
		if(Num[i]>max){
			max=Num[i];
		}
	}
	return max;
}

int getMin(int Num[],int n){
	int min=INT_MAX;
	for(int i=0;i<n;i++){
		if(Num[i]<min){
			min=Num[i];
		}
	}
	return min;
}

int main(){
	int size;
	cin>>size;

	int num[100];
	for(int i=0;i<=size;i++){
			cin>>num[i];
		}
	cout<<"Maximum size : "<<getMax(num,size)<<endl;
	cout<<"Minimum size : "<<getMin(num,size)<<endl; 

	return 0;
}

