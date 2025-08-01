#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	//برنامج لجمع عددين وتربيعهما وقسمه الناتج على 2
	int x,y,sum;
	cout<<"ادخل العدد "<<endl;
	cin>>x>>y;
	sum=x+y;
	cout<<sum<<endl;
	cout<<pow(sum,2)<<endl;
	cout<<pow(sum,2)/2;

    return 0;
}
