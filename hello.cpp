#include<bits/stdc++.h>
#include <iostream>
#include<string.h>
#include<math.h>
using namespace std;

/*
int main()
{
	// prints hello world
	cout << "Hello World";

	int a;
	cin>>a;
	if (a>0)
		cout<<a<<endl;
	else
		cout<<-(a)<<endl;

	cout<<"namste dunia :-)"<<endl;

	int q=123;
	cout<<q<<endl;
	char b='v';
	cout<<b<<endl;
	bool b1=true;
	cout<<b1<<endl;
	bool b2=false;
	cout<<b2<<endl;
	float c=1.2;
	cout<<c<<endl;
	double d=1.234;
	cout<<d<<endl;
	int size=sizeof(d);
	cout<<size<<endl; 
	
	int a='a';
	cout<<a<<endl;
	char ch=98;
	cout<<ch<<endl;
	char ch1=123456;
	cout<<ch1<<endl;
	unsigned int f=132;
	cout<<f<<endl;
	
	unsigned int f=-123;
	cout<<f<<endl;

	int a=2/5;
	cout<<a<<endl;

	float a1=2.0/5;
	cout<<a1<<endl;
	
	int a=3;
	int b=4;
	bool first=(a==b);
	cout<<first<<endl;

	bool second=(a>b);
	cout<<second<<endl;
	
	bool third=(a<b);
	cout<<third<<endl;
	
	bool fourth=(a>=b);
	cout<<fourth<<endl;
	
	bool fifth=(a<=b);
	cout<<fifth<<endl;
	
	bool sixth=(a!=b);
	cout<<sixth<<endl;
	
	cout<<!a<<endl;

	int a=2;
	cin>>a;
	if(a>0)
		cout<<"positive"<<endl;
	else
		cout<<"negative"<<endl;	
		
	int a,b;
	cin>>a>>b;
	if(a>b)
		cout<<"A is greater then b"<<endl;
	else if(b>a)	
		cout<<"B is greater then a"<<endl;
	
	int a=2;
	int b=a+1;
	if((a=3)==b)
		cout<<a;
	else
		cout<<a+1;

	int upper = 0, lower = 0, number = 0, special = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            upper++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            lower++;
        else if (str[i]>= '0' && str[i]<= '9')
            number++;
        else
            special++;
    }
	string str = "#GeeKs01fOr@gEEks07";
    Count(str);
	
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		cout<<i<<" ";
		i=i+1;	
	}

	int n=0;
	cin>>n;
	int sum=0;
	int i=1;
	while (i<=n){
		sum=sum+i;
		i=i+1;
	}
	cout<<sum;

	int n=0;
	cin>>n;
	int sum=0;
	int i=2;
	while(i<=n){
		sum=sum+i;
		i=i+2;
	}	
	cout<<sum;
	
	int frahent;
	cin>>frahent;
	float celsius=((frahent-32)*5)/9;
	cout<<celsius<<endl;

	int n;
	cin>>n;
	int i=2;
	while (i<n)
	{

		if(n%i==0){
			cout<<"not prime"<<endl;
		}
		else{
			cout<<"prime"<<endl;
		}
		i=i+1;
	}		
	
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<" * ";
			j=j+1;

		}
		cout<<endl;
		i=i+1;
	}
	
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<" "<<i<<" ";
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
	
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<" "<<j<<" ";
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
	
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<" "<<n-j+1<<" ";
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
	
	int n;
	cin>>n;
	int i=1;
	int count=1;

	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<count<<" ";
			count=count+1;
			j=j+1;
		}
	cout<<endl;
	i=i+1;
	}
	
	int n;
	cin>>n; 
	int row=1;
	while(row<=n){
		int col=1;
		while(col<=row){
			cout<<" * ";
			col=col+1;
		}
		cout<<endl;
		row=row+1;
	}
	
	int n;
	cin>>n;
	int row=1;
	int count=1;
	while(row<=n){
		int col=1;
		while(col<=row){
			cout<<" "<<count<<" ";
			count=count+1;
			col=col+1;
		}
	cout<<endl;
	row=row+1;
	}
	
	int n;
	cin>>n;
	int row=1;
	while(row<=n){
		int col=1;
		int value=row;
		while(col<=row){
			cout<<" "<<value<<" ";
			value=value+1;
			col=col+1;
		}
		cout<<endl;
		row=row+1;
	}
	
	int n;
	cin>>n;
	int row=1;
	while(row<=n){
		int col=1;
		while(col<=row){
			cout<<(row-col+1)<<" ";
			col=col+1;
		}
		cout<<endl;
		row=row+1; 
	}
	
	int n;
	cin>>n;
	int row=1;
	while(row<=n){
		int col=1;
		while(col<=n){
			char ch='A'+row-1;
			cout<<" "<<ch<<" ";

			col=col+1;
		}
		cout<<endl;
		row=row+1;
	}

	int a=3,b=4;
	cout<<(a&b)<<endl;
	cout<<(a|b)<<endl;
	cout<<(~a)<<endl;
	cout<<(a^b)<<endl;
	
	cout<<(17>>1)<<endl;
	cout<<(17>>2)<<endl;
	cout<<(19<<2)<<endl;
	cout<<(19<<1)<<endl;
	
	int i=3;
	cin>>i; 
	cout<<(i++)<<endl;
	cout<<(i--)<<endl;
	cout<<(++i)<<endl;
	cout<<(--i)<<endl;
	
	int a,b=1;
	a=10;
	if(++a)
		cout<<b<<endl;
	else	
		cout<<++b;

	int n;
	cin>>n;
	
	for	(int i=1;i<=n;i++){
		cout<<i<<endl;
	}
	
	int n;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=i;
	}	
	cout<<sum;
	fibbonicci
	int n;
	cin>>n;
	int a=0;
	int b=1;
	for(int i=1;i<=n;i++){
		int num=a+b;
		cout<<num<<" ";
		a=b;
		b=num; 
	}

	int n;
	cin>>n;
	for(int i=0;i<5;i++){
		cout<<"hi"<<endl;
		cout<<"gg"<<endl;
		continue;
		cout<<"go away"<<endl;
	}
	
	for(int i=0;i<=5;i++){
		cout<<i<<" ";
		i++;
	}
	
	for(int i=0;i<=5;i--){
		cout<<i<<" ";
		i++;
	}
	
	for(int i=0;i<=15;i+=2){
		cout<<i<<" ";
		if(i&1){
			continue;
		}
		i++;
	}
	
	for(int i=0;i<=5;i++){
		for(int j=i;j<=5;j++){
			cout<<i<<" "<<j<<endl;
		}
	}	

	for(int i=0;i<=5;i++){
		for(int j=i;j<=5;j++){
			if(i+j==10){
				cout<<i<<" "<<j<<endl;
			}	
		}
	}	
	
	//dec to bin
	int n;
	cin>>n;
	int ans=0;
	int i=0;
	while(n!=0){
		int digit = n&1;
		ans=(digit*pow(10,i))+ans;
		n=n>>1;
		i++; 
	}	
	cout<<"Answer is "<<ans<<endl;
	
	//bin to dec
	int n;
	cin>>n;
	int ans=0,i=0;
	while(n!=0){
		int digit=n%10;
		if(digit==1)
			ans =ans+pow(2,i);
	n=n/10;
	i++;
	}
	cout<<ans<<endl;
	//switch
	int num=2;
	cout<<endl;
	switch (num){
		case 1: cout<<"don"<<endl;
			break;
		case 2: cout<<"go"<<endl;	
			break;
		default : cout<<"fuck u"<<endl;	
	}
	
//calculator
	int a,b;
	cout<<"Enter the value of a : ";
	cin>>a;

	cout<<"Enter the value of b : ";
	cin>>b;

	char op;
	cout<<"enter operation you want to perform : ";
	cin>>op;

	switch(op){
		case '+' : cout<<"Addition of a+b : "<<(a+b)<<endl;
			break;
		case '-' : cout<<"Subtraction of a-b : "<<(a-b)<<endl;
			break;
		case '*':  cout<<"Multiply of a*b : "<<(a*b)<<endl;	
			break;
		case '/' : cout<<"Divide of a/b : "<<(a/b)<<endl;	
			break;
		case '%' : cout<<"Mode of a%b : "<<(a%b)<<endl;
			break;	
		default :  cout<<"Enter valid operation : "<<endl;
	}
	
	int n;
	cout<<"Enter the accoumnt : ";
	cin>>n;

	int op;
	cout<<"enter operation you want to perform : ";
	cin>>op;
	switch(op){
		case 1: cout<<(n/1000)<<endl;
			break;
		case 2 : cout<<(n/500)<<endl;
			break;
		case 3 : cout<<(n/50)<<endl;
			break;
		case 4 : cout<<(n/10)<<endl;
			break;
		default : cout<<"UPI lele"<<endl;			
 	}
	
//function
	int a,b;
	cin>>a>>b;
	int answer=1;

	for (int i=1;i<=b;i++){
		answer=answer*a;
	}
	cout<<answer<<endl;
	
int power(int a,int b){
	
	int answer =1;

	for(int i=1;i<=b;i++){
		answer=answer*a;
	}
	return answer;
}
int main(){
	int a,b;
	cin>>a>>b;
	int answer=power(a,b);
	cout<<answer<<endl;

	//nCr
int  factorial(int n){ 	
	int fact=1;

	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;

} 
int nCr(int n,int r){
	int num=factorial(n);
	int dem=factorial(r)*factorial(n-r);
	return num/dem;
}
int main(){
	int n,r;
	cin>>n>>r;
	cout<<nCr(n,r)<<endl;		
}
	
int printnum(int n){
	//functon body
	for(int i=1;i<=n;i++){
		cout<<i<<" ";
	}
}
int main(){
	//function call
	int n;
	cin>>n;
	printnum(n);

	return 0;
}


bool primeNumber(int n){
	for(int i=2;i<=n;i++){
		if(n%2==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n;
	cin>>n;
	if (primeNumber(n)){
		cout<<"is prime "<<endl;
	}
	else{
		cout<<"Not prime"<<endl;
	}

	return 0;
}
	
void dummy(int n){
	n++;
	cout<<"Enter n : "<<n<<endl;
}

int main(){
	int  n;
	cin>>n;
	dummy(n);
	cout<<"number is n: "<<n<<endl;	

	return 0;
}
	
int main(){
	int number[12];
	cout<<"Enter the value : "<<number[15]<<endl;

	return 0;
} 
	
int main(){
	int num[5]={1,2,3,4,5};
	cout<<"Enter the value : "<<num[4]<<endl;

	return 0;
}  
	
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
	
void update(int arr[],int n){
	cout<<"Inside th function : "<<endl;

	//updating array
	arr[0]=120;

	for(int i=0;i<3;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;

	cout<<"Going back to main function : "<<endl;
}

int main(){
	int arr[3]={1,2,3};
	update(arr,3);

	for(int i=0;i<3;i++)
		cout<<arr[i]<<" ";


	return 0;
}

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

//sort01
void printArray(int arr[],int n){
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
}

void sortOne(int arr[],int n){
	int left=0,right=n-1;
	while(left<right){
		while(arr[left]==0 && left<right){
			left++;
		}
		while(arr[right]==1 && left<right){
			right--;
		}
		//arr[left]==1 && arr[right]==0 &&  
		if(left<right){
			swap(arr[left],arr[right]);
			left++; 
			right--; 
		}	
	}
}

int main(){
	int arr[10]={1,1,0,1,0,0,1,0,1,0};

	sortOne(arr,10);
	printArray(arr,10);

	return 0;
}

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
//bond
    long long int sqrt(int n){
        int s=0;
        int e=n;
        long long int mid =s+(e-s)/2;
        long long int ans=-1;

        while(s<=e){
            long long int square=mid*mid;
            if(square==n){
                return mid;
            }
            else if(square<n){
                ans=mid;
                s=mid+1;

            }
            else{
                e=mid-1;

            }
            mid=s+(e-s)/2;
        } 
        return ans;
    }

double moreprecision(int n,int precision,int tempsol){
	double factor=1;
	double ans=tempsol;
	for(int i=0;i<precision;i++){
		factor=factor/10;
		for(double j=ans;j*j<n;j=j+factor){
			ans=j;
		}	
	}
	return ans; 
}

int main(){
	int n;
	cout<<"Enter the number :";
	cin>>n; 

	int tempsol=sqrt(n);	

	cout<<"Answer is :"<<moreprecision(n,3,tempsol);
	return 0;
}	

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

//merge sorted array

void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
	int i=0,j=0; 
	int k=0;
	while(i<n && j<m){
		if(arr1[i]<arr2[j])
			arr3[k++]=arr1[i++];
		
		else
			arr3[k++]=arr2[j++];
	}

	while(i<n)
		arr3[k++]=arr1[i++];

	while(j<m)
		arr3[k++]=arr2[j++];
	
}

void print(int ans[],int n){
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}cout<<endl;
}

int main(){
	int arr1[5]={1,2,3,4,5};
	int arr2[3]={7,8,9};
	int arr3[8]={0};

	merge(arr1,5,arr2,3,arr3);
	print(arr3,8);

	return 0;
}

//2-D array
int main(){
	int arr[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cin>>arr[i][j];
		}
	}

	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;		
}

//pointer
int main(){
	double num=5;
	double *ptr=&num;
	cout<<"Enter the address : "<<ptr<<endl;
	cout<<"Enter the value: "<<*ptr<<endl;
	
	cout<<"enter integer :"<<sizeof(ptr)<<endl;
	cout<<"enter pointer :"<<sizeof(*ptr)<<endl;
}	

//pointer impomtant
int main(){
	int num=5;
	int a=num;
	cout<<"a before "<<num<<endl;
	a++;
	cout<<"a after "<<num<<endl;
	int *q=p;
	cout<<p<<"-"<<q<<endl;
	cout<<*p<<"-"<<*q<<endl;
	int i=3;
	int *t=&i;
	cout<<(*t)++<<endl;
}
 	*/

//referene variable
/*
void update2(int& n){
		n++;
	}
	void update1(int n){
		n++;
	}

int main(){

	/*
	int a=7;
	int *c=&a;
	c=c+3;
	cout<<c<<endl;


	int n=5;
	cout<<"Before "<<n<<endl;
	update2(n);
	cout<<"After "<<n<<endl;
	return 0;
}

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

//GlobalVariables
int score=15;

void a(int& i){
	cout<<score<<"in a"<<endl;

	char ch='a';
	cout<<i<<endl;
	//b(i);
}

void b(int& i){

	cout<<score<<"in b"<<endl;
	cout<<i<<endl;
}

int main(){
	cout<<score<<"in main"<<endl;
	int i=5;
	a(i);
	b(i); 
	{
		int i=2;
		cout<<i<<endl;
	}
	cout<<i<<endl;
	return 0;
}

//inline Function
inline int getmax(int& a,int& b){
	return (a>b)? a:b;

}
int main(){
	int a=2,b=4;
	int ans=0;
	
	ans=getMax(a,b);
	cout<<ans<<endl;

	a=a+3;
	b=b+1;
	
	ans=getMax(a,b);
	cout<<ans<<endl;

	return 0;
}

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

//Recursion
//Factorial
int factorial(int n){
	//base count
	if(n==0)
		return 1;
	
	//int chotti=factorial(n-1);
	//int badi=n*chotti;

	return n*badi(n-1);

}

int main(){
	int n;
	cin>>n;

	int ans= factorial(n);
	
	cout<<ans<<endl; 

	return 0;
}

// Factorial
int power(int n){
	if(n==0)
		return 1;
	return 2*power(n-1);

}

int main(){
	int n;
	cin>>n;
	int ans=power(n);
	cout<<ans<<endl;

	return 0;
}
  */
//Printing counting
void print(int n){
	//base case 	
	if(n==0)
		return;

	print(n-1);
	
	cout<<n<<endl;
} 

int main(){
	int n;
	cin>>n;
	cout<<endl;
	print(n);
	return 0;
}