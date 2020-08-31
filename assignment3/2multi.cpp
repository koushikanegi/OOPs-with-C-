#include<iostream>
using namespace std;
class complex{
	int real,img;
	public:
		complex(int r,int i){
		real=r;
		img=i;
				}
		friend complex operator*(complex &obj1,complex &obj2);	
    	void print(){
		cout<<real<<"+i"<<img<<endl;
		}
	
};
complex operator*(complex &obj1,complex &obj2)	{
		return complex(((obj1.real*obj2.real)-(obj1.img*obj2.img)),((obj1.real*obj2.real)+(obj1.img*obj2.img)));
		}
		

int main(){
	int i,j,a,b;
	cout<<"ENTER THE REAL AND IMAGINARY PART OF OBJECT 1 AND OBJECT 2 RESPECTIVELY  :"<<endl;
	cin>>i>>j;
	cin>>a>>b;
	complex obj1(i,j),obj2(a,b);
	cout<<"COMPLEX NUMBERS ARE : ";
	obj1.print();
	obj2.print();
	cout<<"MULTIPLICATION OF BOTH NUMBER : ";
	complex	obj3=obj1*obj2;
	obj3.print();
}
