#include<iostream>
using namespace std;
class complex{
	int real,img;
	public:
		complex(int r,int i){
		real=r;
		img=i;
				}
		friend complex operator==(complex &,complex &);
		friend complex operator!=(complex&,complex &);	
};

	complex operator==(complex &obj1,complex &obj2){
			if(obj1.real==obj2.real && obj1.img==obj2.img)
			cout<<"COMPLEX NUMBERS ARE EQUAL";
		}
	complex operator!=(complex &obj1,complex &obj2){
			if(obj1.real!=obj2.real && obj1.img!=obj2.img)
			cout<<"COMPLEX NUMBERS ARE NOT EQUAL";
		}	
int main(){
	int i,j,a,b;
	cout<<"ENTER THE REAL AND IMAGINARY PART OF OBJECT 1 AND OBJECT 2 TO COMPARE RESPECTIVELY  :"<<endl;
	cin>>i>>j;
	cin>>a>>b;
	complex obj1(i,j),obj2(a,b);
	operator==(obj1,obj2);
	operator!=(obj1,obj2);
}
