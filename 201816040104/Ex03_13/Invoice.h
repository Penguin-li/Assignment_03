#include<string>
using namespace std;
class Invoice
{
public:
    Invoice( string , string , double , double);//set partNumber,partDescription,partQuantity, partPrice;
    void setPartNumber( string );//set partNumber
    void setPartDescription( string );//set partDescription
    void setPartQuantity( double );//set partQuantity
    void setPartPrice( double );//set partPrice
    string getPartNumber();//get partNumber
    string getPartDescription();//get partDescription
    double getPartQuantity();//get partQuantity
    double getPartPrice();//get partPrice
    double getInvoiceAmount();//get InvoiceAmount
private:
    string partNumber;
    string partDescription;
    double partQuantity;
    double partPrice;
};

