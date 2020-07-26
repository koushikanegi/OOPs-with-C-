#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[20];
	int l,i,j;
	cout<<"Enter the string : ";
	gets(str);
	l=strlen(str);
	int flag=0;
	
	for(i=0,j=l-1;i<l/2;i++,j++)
	{
	if(str[i]!=str[j])
		flag=1;
		break;
	}
	if(flag==1)
    cout<<"string is not palindrome";
	else
	cout<<"string is palindrome";	
}
