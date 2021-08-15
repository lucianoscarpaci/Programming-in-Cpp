#include <iostream>
using namespace std;
class Invoice
{
    public:
        //declaring the constructor and function in public access modifiers
        Invoice(string, string, int, int);
        //setters and getters
        void setPartNumber(string);
        string getPartNumber();
        void setPartDescription(string);
        string getPartDescription();
        void setItemQuantity(int);
        int getItemQuantity();
        void setItemPrice(int);
        int getItemPrice();
        int getInvoiceAmount();
    private:
        //declaration of variables only can be accessed by Invoice
        string partNumber;
        string PartDescription;
        int itemQuantity;
        int itemPrice;
};
//Defining a constructor
Invoice::Invoice(string number, string description, int quantity, int price)
{
    //getting the values using set() and get()
    partNumber=number;
    partDescription=description;
    if(quantity>0)
        itemQuantity=quantity;
    else
    {
        itemQuantity=0;
        cout<<"Initial quantity was invalid."<<endl;
    }
    if(price>0)
        itemPrice=price;
    else
    {
        itemPrice=0;
        cout<<"Initial price was invalid."<<endl;
    }
}
//set the part numbers
void Invoice::setPartNumber(string number)
{
    if (number.length() <= 25)
        partNumber = number;
    if (number.length() > 25)
    {
        partNumber = number.substr(0,25);
        cout<<"None \""<< number <<"\" exceeds maximum length (25).\n"
        cout<<"maximum length of partNumber is 25 characters.\n"<<endl;
    }
}
//set the part description
void Invoice::setPartDescription(string description)
{
    if(description.length() <= 25)
        partDescription = description;
    if(description.length() > 25)
    {
        partNumber = description.substr(0,25);
        cout<<"None \""<< number <<"\" exceeds maximum length (25).\n"
        cout<<"maximum length of partDescription is 25 characters.\n"<<endl;
    }
}
//set the item quantities
void Invoice::setItemQuantity(int quantity)
{
    if(quantity>0)
        itemQuantity=quantity;
    else
    {
        itemQuantity=0;
        cout<<" quantity is invalid."<<endl;
    }
}
//get the part number
string Invoice::getPartNumber()
{
    return partNumber;
}
//get the part description
string Invoice::getPartDescription()
{
    return partDescription;
}
//get the item quantity
int Invoice::getItemQuantity()
{
    return itemQuantity;
}
//get the item price
{
    return itemPrice;
}
//get the total amount
int Invoice::getInvoiceAmount()
{
    return itemQuantity*itemPrice;
}
int main()
{
    //Create an object, which include part number, part description
    //Quantity of the item being purchased, a price per item
    string part_number, part_description;
    int quantity;
    float price;
    cout<<"Enter the part number (in string): "; 
    cin>>part_number;
    
    cout<<"Enter the part description: ";
    cin>>part_description;
    
    cout<<"Enter quantity: ";
    cin>>quantity;

    cout<<"Enter the price: ";
    cin>>price;
    //Objects of the class invoice
    Invoice Invoice1(part_number, part_description, quantity, price);
    // Print the Invoice
    cout<<"Invoice's\n\n";
    cout<<"initial part number is: "<<Invoice1.getPartNumber()<<endl;
    cout<<"\n part description is: "<<Invoice1.getPartDescription()<<endl;
    cout<<"quantity per item is: "<<Invoice1.getItemQuantity()<<endl;
    cout<<"Invoice's total amount: "<<Invoice1.getInvoiceAmount()<<endl;

    return 0;

}



