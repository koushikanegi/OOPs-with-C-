#include<iostream>
#include<cstring>
using namespace std;
void pointArray(string arr,int i,int n){
	cout<<arr[i];
	if(i<n){
	pointArray(arr,i+1,n-1);
	}	
	
}

int main(){
	string arr;
	int i,n;
	cout<<"ENTER STRING ARRAY : ";
	getline(cin,arr);
	cout<<"ENTER START AND END POINT";
	cin>>i>>n;
	
	pointArray(arr,i,n-1);
}

