#ifndef PRODUCT_H
#define PRODUCT_H
#include<string>
using namespace std;
class Product
{
	private:
	  int id;
	  string description;
	  double unitPrice;
	  string title;
	  
		
	protected:
		int getId();
		string getDescription();
		double getUnitPrice();
		string getTitle();
		
		void setId();
		void setDescription();
		void setUnitPrice();
		void setTitle();
};

#endif
