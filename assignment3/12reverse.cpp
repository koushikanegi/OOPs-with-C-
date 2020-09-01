#include<iostream>
#include<cstring>
using namespace std;
int l;
void stringReverse(string s,int i){
	cout<<s[l];
	if(l!=i){
		l=l-1;
	    stringReverse(s,i);
	}
}
int main(){
	string s;
	cout<<"ENTER STRING :";
	getline(cin,s);
	int i=0;
	l=s.size();
	cout<<"\n REVERSE STRING :- ";
	stringReverse(s,i);
}
