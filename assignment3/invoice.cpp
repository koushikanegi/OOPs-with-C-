#include"invoice.h"
using namespace std;

invoice::invoice(string num,string des,int q,int p){
			number=num;
			description=des;
			qty=q;
			price=p;
		}
void invoice::setnumber(string num){
		number=num;
		
	}
string invoice::getnumber(){
		return number;
	}
	
	void invoice::setdescription(string des){
		description=des;
	}
	string invoice::getdescription(){
		return description;
	}
	void invoice::setqty(int q){
		qty=q;
	}
	int invoice::getqty(){
		return qty;
	}
	void invoice::setprice(int p){
		price=p;
	}
	int invoice::getprice(){
		return price;
	}
	
	int invoice::getinvoiceamount(){
		if(qty>0&&price>0)
		return qty*price;
		else
		return 0;
	}
};
