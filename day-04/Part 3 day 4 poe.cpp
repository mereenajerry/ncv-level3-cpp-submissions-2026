#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int calcSum(int num1, int num2);
int calcDiff(int num1,int num2);
int calcProd(int num1,int num2);
int calcQuot(int num1,int num2);
int randNum1(int num1,int num2);
int randNum2(int num1,int num2);
void generateValue(int &num1,int &num2);


int main()
{
    srand(time(0));
    int randNum1, randNum2;
    generateValue(randNum1, randNum2);
    char op;
    cout<<"Generate numbers:"<<randNum1<<"and"<<randNum2<<endl;
    cout<<"Enter a math operator (+,-,*,/)";
    cin>>op;
//switch
switch(op)
{
case'+':
    cout<<"Result:"<<calcSum(randNum1,randNum2);
    break;
case'-':
    cout<<"Result:"<<calcDiff(randNum1,randNum2);
    break;
case'*':
    cout<<"Result:"<<calcProd(randNum1,randNum2);
    break;
case'/':
    cout<<"Result:"<<calcQuot(randNum1,randNum2);
    break;
default:
    cout<<"Invalid:";
}
return 0;
}
void generateValue(int &randNum1,int &randNum2)
{
     randNum1=(rand()%50)+1;
     randNum2=(rand()%50)+1;
}

////sum
//    int total = calcSum(n1,n2);
//    cout<<"The sum of "<<n1<<" and "<<n2<<" is "<<total<<endl;
//
//
//    calcSum(n1, n2);
////difference
//
//    int difference = calcDiff(n1,n2);
//    cout<<"The diff: of "<<n1<<" and "<<n2<<" is "<<difference<<endl;
//
//
//    calcDiff(n1,n2);
////Products
//    int product = calcProd(n1,n2);
//    cout<<"The product: of "<<n1<<" and "<<n2<<" is "<<product<<endl;
//
//
//    calcProd(n1,n2);
////Quotient
//    int quotient = calcQuot(n1,n2);
//    cout<<"The quotient: of "<<n1<<" and "<<n2<<" is "<<quotient<<endl;
//
//
//    calcQuot(n1,n2);



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
