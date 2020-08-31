#include<iostream>
using namespace std;
class complex{
	int real,img;
	public:
		complex(){
		}
		void operator>>(complex &)
		{
			cout<<"ENTER THE REAL AND IMAGINARY PART : ";
			cin>>real>>img;  
			 
		}
		void operator<<(complex &){
		cout<<"THE COMPLEX NUMBER IS : ";
		cout<<real<<"+i"<<img;
		}
	
};

int main(){
	complex c;
	c.operator>>(c);
	c.operator<<(c);
}
