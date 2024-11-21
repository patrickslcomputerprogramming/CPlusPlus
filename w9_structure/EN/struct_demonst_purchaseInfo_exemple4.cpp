#include <iostream>
using namespace std ;
//Declare global variables
struct Purchase
{
    string product_name;
    float unit_price;
};

main()
{
    //Declare variables and initialize
    //A variable of type structure Purchase
    Purchase customer1, customer1_discount;
    //User-defined functions
    void save_purchase(Purchase &currentPurchase);
    Purchase calculate_discount(Purchase currentPurchase);

    //Invite, Read and Save input data
    //A function that receives a variable of type structure Purchase as parameter
    //A function that can modify the members of the structure Purchase
    save_purchase(customer1);

    //Display output data before the discount
    cout<<endl<<"Before the discount"<<endl;
    cout<<"Product Name : "<<customer1.product_name<<endl;
    cout<<"Unit Price: "<<customer1.unit_price<<" $CA"<<endl;

    //Calculate a discount of 10% of the price
    //A function that return a variable of type structure Purchase
    //A function that receives a variable of type structure Purchase as parameter
    customer1_discount = calculate_discount(customer1);

    //Display output data after the discount
    cout<<endl<<"After the discount"<<endl;
    cout<<"Unit Price: "<<customer1_discount.unit_price<<" $CA"<<endl;
}

void save_purchase(Purchase &currentPurchase)
{
    //Invite, Read, and Save input data
    cout << "Enter the product name:"<<endl;
    cin >> currentPurchase.product_name;
    cout << "Enter the unit price:"<<endl;
    cin >> currentPurchase.unit_price;
}

Purchase calculate_discount(Purchase currentPurchase)
{
    //Declare variables
    float tenPercentOfPrice;
    //Calculate price - 10%
    tenPercentOfPrice = currentPurchase.unit_price * 0.1;
    currentPurchase.unit_price = currentPurchase.unit_price - tenPercentOfPrice;
    return currentPurchase;
}
