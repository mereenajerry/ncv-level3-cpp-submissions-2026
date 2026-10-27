//Total expense of 2026
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
//declare and assign
  const double fees_per_subject=2000;// subject fees remains the same
  const double transport_per_month=500;
  float total_fees;  //total fee is a decimal no
  float total_expense;
  float total_transport_fees;
  int no_of_subjects=0;
  //Input no of subjects
  cout<<"Enter_no_of_subjects:"<<endl;
  cin>>no_of_subjects;
  //processing
  total_fees=no_of_subjects*2000;
  total_transport_fees=12*500;
  total_expense=total_fees+total_transport_fees;
  //output formatted to two decimal places
  cout<<fixed<<setprecision(2);
  cout<<"total_transport_fees:\tR"<<total_transport_fees<<endl;
  cout<<"total_fees:\t\tR"<<total_fees<<endl;
  cout<<"total_expense:\t\tR"<<total_expense<<endl;
  return 0;


}
