#include<iostream>
using namespace std;

void calcSum(int num1, int num2);
void calcDiff(int num1,int num2);
void calcProd(int num1,int num2);
void calcQuot(int num1,int num2);

int main()
{
    int n1, n2;
    cout<<"enter two numbers:";
    cin>>n1>>n2;
//sum
    calcSum(n1,n2);

//difference

     calcDiff(n1,n2);


//Products
     calcProd(n1,n2);


//Quotient
     calcQuot(n1,n2);



return 0;
}
//sum
void calcSum(int num1, int num2)
{
   cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<num1+num2<<endl;
}
//difference
void calcDiff(int num1,int num2)
{
    cout<<"The diff: of "<<num1<<" and "<<num2<<" is "<<num1-num2<<endl;
}


//product

void calcProd(int num1,int num2)
{
  cout<<"The product: of "<<num1<<" and "<<num2<<" is "<<num1*num2<<endl;

}

//Quotient

void calcQuot(int num1,int num2)

{
  cout<<"The quotient: of "<<num1<<" and "<<num2<<" is "<<num1/num2<<endl;
}
