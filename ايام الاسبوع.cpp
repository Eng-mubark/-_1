#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"please enter today's number \n";
    cin>>x;
    if(x==1)
        cout<<"saturday ";
    else if(x==2)
        cout<<"sunday ";
    else if(x==3)
        cout<<"monday ";
    else if(x==4)
        cout<<"tuesday ";
    else if(x==5)
        cout<<"wednesday ";
    else if(x==6)
        cout<<"thursday ";
    else if(x==7)
        cout<<"friday ";
    else cout<<"the number you entered is not true";

    return 0;
}
