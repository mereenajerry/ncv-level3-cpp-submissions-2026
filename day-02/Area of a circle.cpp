//Area and perimeter of a  circle
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    const double PI=3.14;
    int radius;
    int area;
    int perimeter;
    cout<<"enter_the_value_of_radius:"<<endl;
    cin>>radius;

    area=2*PI*radius*radius;
    perimeter=2*PI*radius;

    cout<<"area:\t\t"<<area<<endl;
    cout<<"perimeter:\t"<<perimeter<<endl;
    return 0;

}
