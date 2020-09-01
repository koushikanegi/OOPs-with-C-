#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int recursiveMin(int arr[],int i,int l)
{
	if(i==l)
	    return arr[i];
        
	return min(arr[l],recursiveMin(arr,i,l-1));		
	
	
}
int main(){
	int n,i,arr[n],s,e;
	cout<<"ENTER THE SIZE OF ARRAY : ";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"ENTER START AND END POINT  : ";
	cin>>s>>e;
	cout<<recursiveMin(arr,s,e);
	return 0;
}


