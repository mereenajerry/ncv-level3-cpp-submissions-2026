#include <iostream>
using namespace std;
int main()
{
string message;
char gender_code;
cout<<"genger_code"<<endl;
cin>>gender_code;
switch (gender_code)

{
  case 'M':
  case 'm':
      message= "You are a male";
            break;

  case 'F':
  case 'f':
      message= "You are a female";
            break;

  default:message= "Invalid";
            break;
}
cout<<message<<endl;
return 0;
}
