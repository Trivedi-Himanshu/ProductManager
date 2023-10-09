#include "Product.h"
#include<string>
using namespace std;
Product::Product()
{
	this->id=1001;
	this->title= "Shampoo";
	this->description = "Anti Hair Fall Shampoo...!";
	this->unitPrice= 300;
}

Product::Product(int id, string title,string description, double price){
	this->id = id;
	this->title = title;
	this->description = description;
	this->unitPrice= price;
}

//----------Getter----------
	
int Product::getId(){
	return this->id;
}
string Product::getDescription(){
	return this->description;
}
double Product::getUnitPrice(){
	return this->unitPrice;
}
string Product::getTitle(){
	return this->title;
}

//----------Setter----------
		
void Product::setId(int id){
	this->id=id;
}
void  Product:: setDescription(string description){
	this->description=description;
}
void  Product::setUnitPrice(double price){
	this->unitPrice=price;
}
void  Product::setTitle(string title){
	this->title=title;
}
