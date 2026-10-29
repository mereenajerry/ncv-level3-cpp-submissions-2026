#include<iostream>
using namespace std;

void getValue(int &num1,int &num2);
int calcSum(int num1, int num2);
int calcDiff(int num1,int num2);
int calcProd(int num1,int num2);
int calcQuot(int num1,int num2);


int main()
{
    int n1, n2;


    getValue(n1,n2);


//sum
    int total = calcSum(n1,n2);
    cout<<"The sum of "<<n1<<" and "<<n2<<" is "<<total<<endl;


    calcSum(n1, n2);
//differnce

    int difference = calcDiff(n1,n2);
    cout<<"The diff: of "<<n1<<" and "<<n2<<" is "<<difference<<endl;


    calcDiff(n1,n2);
//Products
    int product = calcProd(n1,n2);
    cout<<"The product: of "<<n1<<" and "<<n2<<" is "<<product<<endl;


    calcProd(n1,n2);
//Quotient
    int quotient = calcQuot(n1,n2);
    cout<<"The quotient: of "<<n1<<" and "<<n2<<" is "<<quotient<<endl;


    calcQuot(n1,n2);


    return 0;
}
void getValue(int &num1,int &num2)
{
    cout<<"enter two numbers:";
    cin>>num1>>num2;
}
//sum
int calcSum(int num1, int num2)
{
    return  num1 + num2;
}
//differnce
int calcDiff(int num1,int num2)
{
    return num1 - num2;
}
//product

int calcProd(int num1,int num2)
{
    return num1 * num2;
}
//Quotient

int calcQuot(int num1,int num2)
{
    return num1 / num2;
}
