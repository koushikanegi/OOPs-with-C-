#include<iostream>
#include<cmath>
using namespace std;
inline float sphereVolume(float r){
	return((4.0/3.0)*3.14159*pow(r,3));
}

int main(){
	float r;
	cout<<"ENTER THE RADIUS OF SPHERE : ";
	cin>>r;
	cout<<"\n VOLUME OF SPHERE : "<<sphereVolume(r);
	return 0;
}
