#include<iostream>
using namespace std;

float calculateCharge(float hrs){
	float charge=2.00;
	
	if(hrs>3){
		int cost=hrs-3;
		charge+=cost*0.50;
		if(charge>10.00)
		{
			charge=10.00;
		}
	}
	return charge;
}


int main(){
	int n,i; //n=number of cars parked in a day
	float h[n],total=0.00,thrs=0.00;
	cout<<"enter the number of cars : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"ENTER THE HOUR FOR CAR "<<i+1<<" : ";
		cin>>h[i];
	}
		
cout<<"\n \t CAR \t HOURS \t COST"<<endl;

	for(i=0;i<n;i++)
	{
		{
		cout<<"\t"<<i+1<<"\t"<<h[i]<<"\t"<<calculateCharge(h[i])<<endl;
		}
	thrs=thrs+h[i];	
	total =total + calculateCharge(h[i]);
		
	}
	cout<<"\tTOTAL "<<"\t"<<thrs<<"\t"<<total<<endl;
}
