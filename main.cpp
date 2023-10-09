#include <iostream>
#include<string>
#include"product.h"
#include"ProductManager.h"
//vector <Product> vector1;

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	ProductManager pm;
	int choice;
	cout<<"\nEnter choice from the given options and there actions...";
	cout<<"1. Insert\n"<<endl
		<<"2. Delete\n"<<endl
		<<"3. Update\n"<<endl
		<<"4. Exit\n"<<endl;
	
	cin>>choice;
	
	switch (choice){
	
	case 1:pm.insertProduct(1003,"Chavanprash","Sona chandi chavanprash...!",300);
		break;
//	case 2:updateProduct();
//		break;
//	case 3:delete();
//		break;
	case 4:
		break;	
}
//	insert(1003,'Chavanprash','Sona chandi chavanprash...!',300);
	return 0;
}
