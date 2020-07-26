#include<iostream>
using namespace std;

int main(){
	int num,num1,digit,rev=0;
	cout<<"ENTER THE NUMBER : ";
	cin>>num;
	num1=num;
	while(num!=0)
	{
		digit=num%10;
		rev=(rev*10)+digit;
		num=num/10;
	}
	
	
	
	if(num1==rev)
	cout<<" THE NUMBER IS PALINDROME";
	else
	cout<<" THE NUMBER IS NOT PALINDROME ";
	
}
