#include "ProductManager.h"
#include<string>
using namespace std;
extern vector <Product> vector1;
ProductManager::ProductManager()
{

}


ProductManager::insertProduct(int id,string title,string description, double price){
	Product p1(id, title,description,price);
	vector1.push_back(p1);	
}
	
ProductManager::update(){
//	Product p1()
}

ProductManager::delete(){
	vector1.pop_back();
}

