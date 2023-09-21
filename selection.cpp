#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main()
{
	//selection sort
	void selectionSort(vector<int>& arr, int n)
	{   
		// Write your code here.
		for(int i=0;i<n-1;i++){
			int minIndex=i;
			
			for(int j=i+1;j<n;j++){
				if(arr[j]<arr[minIndex])
					minIndex=j;
			}
			swap(arr[minIndex],arr[i]);
		}
	}
}