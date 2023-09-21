#include<iostream>
using namespace std;
int main(){

	// Question-1
	// *  *  *  *
 	// *  *  *  *
 	// *  *  *  *
 	// *  *  *  *
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

	// Question-2
	// 1  1  1  1 
 	// 2  2  2  2
 	// 3  3  3  3
	// 4  4  4  4

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

	// Question-3

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

	// Question-4

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

	// Question-5

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

	// Question-6

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

	// Question-7

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

	// Question-8

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

	// Question-9

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
	
	// Question-10

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

	// Question-11

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

	// Question-11

	int n;  
    cin>>n;

    int row=1;
    while (row<=n)
    {
        int col=1;
        while (col<=n)
        {
            char ch = 'A' +col-1;
            cout<<" "<<ch<<" ";
            col = col+1;
        }
        cout<<endl;
        row = row +1;
    }

	// Question-12

	int n;
    cin>>n;
   
    int  row =1;
    while (row<=n)
    	{
    	int col=1;
    	while (col<=n)
    	{
        	char ch = 'A'+row+col-2;
        	cout<<" "<<ch<<" ";
        	col = col +1;
    	}
    	cout<<endl;
    	row = row+1;
    }

	// Question-13

	int n;
   	cin>>n;
   
   	int  row =1;
   	while ((row<=n))
   	{
    	int col = 1;
    	while (col<=row)
    	{
    	    char ch = ('A'+row -1);
        	cout<<" "<<ch<<" ";
       		col =col+1;
    	}
    	cout<<endl;
    	row=row+1;
   	}

	// Question-14

	int n;
   	cin>>n;
   
   	int  row =1;
   	while ((row<=n))
   	{
    	int col = 1;
    	while (col<=row)
    	{
    	    char ch = ('A'+row+col-2);
        	cout<<" "<<ch<<" ";
       		col =col+1;
    	}
    	cout<<endl;
    	row=row+1;    
    }

	// Question-15

	int n;
    cin>>n;;

    int row=1;
    while (row<=n)
    {
        int col=1;
        char start='A'+n-row; 
        while (col<=row)
        {
            cout<<" "<<start<<" ";
            start=start+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }

	// Question-16
	
	int n;
    cin>>n;

    int row = 1;
    while(row<=n){
        //first triangle
        int space = n-row;
        while(space){
            cout<<" ";
            space =space -1;
        }
        
		//second triangle
        
		int j=1;
        while (j<=row){
        cout<<j;
        j=j+1;
        }
        
        //third triangle
        
		int start= row-1;
        while (start){
            cout<<start;
            start = start-1;
        }
        cout<<endl;
        row=row+1;
    }




}
