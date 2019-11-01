#include <iostream>
// include definition of class GradeBook from Invoice.h
#include "Invoice.h"
using namespace std;

int main()
{
     // create a Invoice object;
    string number;
    string description;
    double quantity;
    double price;
    cout<<"PartNumber is:"<<endl;
    cin>>number;
    cout<<"PartDescription is:"<<endl;
    cin>>description;
    cout<<"PartQuantity is:"<<endl;
    cin>>quantity;
    cout<<"PartPrice is:"<<endl;
    cin>>price;
    Invoice Invoice1(number,description,quantity,price);
    cout << "PartNumber is:" << invoice.getPartNumber() << endl;
    cout << "PartDescription is:" << invoice.getPartDescription() << endl;
    cout << "PartQuantity is:" << invoice.getPartQuantity() << endl;
    cout << "PartPrice is:" << invoice.getPartPrice() << endl;
    cout << "InvoiceAmount is:" << invoice.getInvoiceAmount() << endl;
}
