#include<iostream>
#include<string>
using namespace std;

class Product
{
    private:
        int ProductCode;
        string ProductName;
        double price;
        int quantityInStock;

public:
    Product();
    Product(int Pc,string Pn, double pz, int qs);
    void setProduct (int Pc,string Pn, double pz, int qs);

    int getProductCode();
    string getProduct();
    double getPrice();
    int getQuantityInStock();
};

 Product::Product()
 {
     ProductCode=0;
     ProductName="";
     price=0;
     quantityInStock =' ';

 }
 Product::Product(int Pc,string Pn, double pz, int qs)
 {
     setProduct(Pc,Pn,pz,qs);
 }
void Product::setProduct(int Pc,string Pn, double pz, int qs)
{
    ProductCode=Pc;
    ProductName =Pn ;
    price =pz;
    quantityInStock = qs;


    if (Pc>0)
        ProductCode =Pc;
    else
        ProductCode ==0;

    if (Pn==" ")
        ProductName="Unknown";
    else
        ProductName=Pn;
    if (pz>0)
        price=pz;
    else
        price==0;
    if (qs>0)
        quantityInStock=qs;
    else
        quantityInStock==0;

}
int Product::getProductCode()
{
    return ProductCode;
}
string Product::getProduct()
{
    return ProductName;
}
double Product::getPrice()      {return price;}
int Product::getQuantityInStock()  {return quantityInStock;}

int main()
{
    Product ps;
    ps.setProduct(111,"Sugar", 25.00, 7);


    cout << ps.getProductCode() <<","<<ps.getProduct() <<","<< ps.getPrice() <<"," <<ps.getQuantityInStock() << endl;


    return 0;
}
