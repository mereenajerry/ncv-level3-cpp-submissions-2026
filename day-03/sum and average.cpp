#include <iostream>
using namespace std;
int main()

{

   int num;

   float sum=0;
   float average=0;

    for(int count=1;count<=5;count++)
    {
        cout<<"enter no:"<<count<<endl;
        cin>>num;
        if(num>=0 and num<=50)
        {
            sum=sum+num;
        }
        else{
        cout<<"invalid no,try again"<<endl;
        count--;
        }
    }

average=(sum)/5;
cout<<"sum:"<<sum<<endl;

cout<<"average:"<<average<<endl;
return 0;
}




