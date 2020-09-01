#include<iostream>
using namespace std;

int main(){
int i,j,k,n;
cout<<"ENTER THE NUMBER TILL YOU WANT TO FIND PYTHAGOREAN TRIPLE :";
cin>>n;
cout<<"PYTH TRIPLETS ARE = ";
for(i=1;i<=n;i++){
	for(j=1;j<=n;j++){
		for(k=1;k<=n;k++){
		
		if(i*i==(j*j)+(k*k))
		cout<<"\n Hypotenuse ="<<i<<"\t Side 1 ="<<j<<"\t Side 2 ="<<k;
		
		
		}
	}
	
}



}
