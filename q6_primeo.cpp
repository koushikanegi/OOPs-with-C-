#include<iostream>
using namespace std;
int main(){
	int num,flag=0;
	cout<<" ENTER THE NUMBER : ";
	cin>>num;
	for(int i=2;i<=num/2;i++)
	{ 
	if(num%i==0)
	flag=1;
	break;
	
	}
	if(flag==0)
	cout<<num<<"is prime number";
	else
	cout<<num<<"is not a prime number";
	return 0;
	}
