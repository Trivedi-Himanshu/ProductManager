#ifndef PRODUCTMANAGER_H
#define PRODUCTMANAGER_H
#include "Product.h"

class ProductManager
{
	private: 
		Product p;
		
	public:
		ProductManager();
		insertProduct(int id,string title,string description, double price);
		updateProduct();
		deleteProduct();
		
	protected:
};

#endif
