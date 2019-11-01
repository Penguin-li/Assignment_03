#include "Invoice.h"// include definition of class Invoice

Invoice::Invoice(string number,string description,double quantity,double price)
{
    setPartNumber(number);
    setPartDescription(description);
    setPartQuantity(quantity);
    setPartPrice(price);
}
void Invoice::setPartNumber(string number)
{
    partNumber=number;
}
string Invoice::getPartNumber()
{
    return partNumber;
}
void Invoice::setPartDescription(string description)
{
    partDescription=description;
}
string Invoice::getPartDescription()
{
    return partDescription;
}
void Invoice::setPartQuantity(double quantity)
{
    partQuantity=quantity;
}
double Invoice::getPartQuantity()
{
    return partQuantity;
}
void Invoice::setPartPrice(double price)
{
    if(price<0)
    {
        partPrice=0;
    }
    else
    {
        partPrice=price;
    }
}
double Invoice::getPartPrice()
{
    return partPrice;
}
double Invoice::getInvoiceAmount()
{
    return (getPartPrice()*getPartQuantity()*);
}
