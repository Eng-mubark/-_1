#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  float birthDay, birthMonth, birthYear, currentDay, currentMonth, currentYear ,a,b,c;
  cout<< "enter birthDay \n";
  cin>>birthDay ;
  cout <<"enter birthMonth \n";
  cin>>birthMonth ;
  cout<<"enter birthYear \n";
  cin>>birthYear ;
  cout<<"enter currentDay \n";
  cin>>currentDay ;
  cout<<"enter currentMonth \n";
  cin>>currentMonth ;
  cout<<"enter currentYear \n";
  cin>>currentYear ;
  a=currentYear - birthYear ;
  b=currentMonth - birthMonth ;
  c=currentDay - birthDay ;
  cout<<"age is: "<<a<<"years and "<<b<<"month and "<<c<<"days "<<endl;

    return 0;
}
    