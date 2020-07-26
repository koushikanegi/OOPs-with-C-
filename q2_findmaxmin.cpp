#include<iostream>
using namespace std;

int main(){
 int n,arr[50],temp,i,j;

cout<<"Enter the number of elements : ";
cin>>n;

cout<<"\n Enter the elements : ";
for(i=0;i<n;i++)
{
	cin>>arr[i];
}

for(i=1;i<=n-1;i++)
{
	temp=arr[i];
	j=i-1;
		while((temp<arr[j])&&(j>=0))
		{
		arr[j+1]=arr[j];
		j=j-1;
		}
	arr[j+1]=temp;
	
}
cout<<"SORTED ARRAY : ";
for(i=0;i<n;i++){
cout<<arr[i]<<" ";
	}
	cout<<"\n Second smallest in array : "<<arr[1];
	cout<<"\n Second largest in array : "<<arr[n-2];
	return 0;
}
