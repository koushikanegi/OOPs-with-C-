#include<iostream>
#include"invoice.h"
using namespace std;
int main(){
	invoice i("123","wheel",10,200);
	cout<<"DETAILS : ";
	cout<<"\n PART NUMBER = "<<i.getnumber()<<"\n DESCRIPTION = "<<i.getdescription()<<"\n QUANTITY = "<<i.getqty()<<"\n PRICE = "<<i.getprice();
	cout<<"\n INVOICE AMOUNT = "<<i.getinvoiceamount()<<"RS";
}
	
	
