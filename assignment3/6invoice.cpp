#include<iostream>
using namespace std;
class invoice{
	string number,description;
	int qty,price;
	public:
		invoice(string num,string des,int q,int p){
			number=num;
			description=des;
			qty=q;
			price=p;
		}
	void setnumber(string num){
		number=num;
		
	}
	string getnumber(){
		return number;
	}
	void setdescription(string des){
		description=des;
	}
	string getdescription(){
		return description;
	}
	void setqty(int q){
		qty=q;
	}
	int getqty(){
		return qty;
	}
	void setprice(int p){
		price=p;
	}
	int getprice(){
		return price;
	}
	
	int getinvoiceamount(){
		if(qty>0&&price>0)
		return qty*price;
		else
		return 0;
	}
};

int main(){
	invoice i("123","wheel",10,200);
	cout<<"DETAILS : ";
	cout<<"\n PART NUMBER = "<<i.getnumber()<<"\n DESCRIPTION = "<<i.getdescription()<<"\n QUANTITY = "<<i.getqty()<<"\n PRICE = "<<i.getprice();
	cout<<"\n INVOICE AMOUNT = "<<i.getinvoiceamount()<<"RS";
}
