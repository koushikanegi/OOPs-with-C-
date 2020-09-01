#include<iostream>
#include<string.h>
using namespace std;
bool palindrome(string s, int i , int len)
{
  if (i == len)
  {
    return true;
  }

  if ( s[i] != s[len])
  {
    return false;
  }
  if (i < len)
    palindrome(s, i+1 , len-1);

  return true;
}


int main(){
	string s;
	cout<<"ENTER STRING : ";
	getline(cin,s);
    int len=s.size();
    int i=0;
    cout<<"\nRESULT IS : "<<palindrome(s, i , len-1);
    return 0;
	
}
