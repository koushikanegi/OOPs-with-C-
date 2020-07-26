#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"ENTER THE THREE NUMBERS : ";
	cin>>a>>b>>c;
	if(a>>b&&a>>c)
	cout<<a<<" is greatest of "<<b<<" and "<<c<<endl;
	else if(b>>a&&b>>c)
	cout<<b<<" is greatest of "<<a<<" and "<<c<<endl;
	else
	cout<<c<<" is greatest of "<<a<<" and "<<b<<endl;
	}
