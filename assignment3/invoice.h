#include<iostream>
using namespace std;
class invoice{
	string number,description;
	int qty,price;
	public:
		invoice(string num,string des,int q,int p);
		void setnumber(string num);
		string getnumber();
		void setdescription(string des);
		string getdescription();
		void setqty(int q);
		int getqty();
		void setprice(int p);
		int getprice();
	
	int getinvoiceamount();
};
