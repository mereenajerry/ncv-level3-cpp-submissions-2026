#include <iostream>
#include <string>
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
    Product(int Pc, string Pn, double pz, int qs);

    void setProduct(int Pc, string Pn, double pz, int qs);
    void GetProductData();
    void DisplayProduct();
    void prodCompare(Product p);

    int getProductCode();
    string getProduct();
    double getPrice();
    int getQuantityInStock();
};

Product::Product()
{
    ProductCode = 0;
    ProductName = "";
    price = 0;
    quantityInStock = 0;
}

Product::Product(int Pc, string Pn, double pz, int qs)
{
    setProduct(Pc, Pn, pz, qs);
}

void Product::setProduct(int Pc, string Pn, double pz, int qs)
{
    ProductCode = (Pc > 0) ? Pc : 0;
    ProductName = (Pn == "") ? "Unknown" : Pn;
    price = (pz > 0) ? pz : 0;
    quantityInStock = (qs > 0) ? qs : 0;
}

// Input product details
void Product::GetProductData()
{
    cout << "Enter Product Code: ";
    cin >> ProductCode;

    cout << "Enter Product Name: ";
    cin >> ProductName;

    cout << "Enter Price: ";
    cin >> price;

    cout << "Enter Quantity in Stock: ";
    cin >> quantityInStock;
}

// Display product details
void Product::DisplayProduct()
{
    cout << "\nProduct Details\n";
    cout << "Code     : " << ProductCode << endl;
    cout << "Name     : " << ProductName << endl;
    cout << "Price    : " << price << endl;
    cout << "Quantity : " << quantityInStock << endl;
}

// Compare first characters of product names
void Product::prodCompare(Product p)
{
    if (!ProductName.empty() && !p.ProductName.empty())
    {
        if (ProductName[0] == p.ProductName[0])
            cout << "\nThe first characters are the SAME." << endl;
        else
            cout << "\nThe first characters are NOT the same." << endl;
    }
    else
    {
        cout << "\nOne or both product names are empty." << endl;
    }
}

int Product::getProductCode()
{
    return ProductCode;
}

string Product::getProduct()
{
    return ProductName;
}

double Product::getPrice()
{
    return price;
}

int Product::getQuantityInStock()
{
    return quantityInStock;
}

int main()
{
    Product p1, p2;

    cout << "Enter details for Product 1\n";
    p1.GetProductData();

    cout << "\nEnter details for Product 2\n";
    p2.GetProductData();

    p1.DisplayProduct();
    p2.DisplayProduct();

    p1.prodCompare(p2);

    return 0;
}
