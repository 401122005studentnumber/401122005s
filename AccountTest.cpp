#include <iostream>
#include"Account.h"

using namespace std;
int main()
{
    Accound myAccount;
    cout<<"Initlal name of myAccount"<<myAccount.getName()<<endl;
    cout<<"please enter the Name of Account:"<<endl;
    string newName;
    cin>>newName;
    myAccount.setName(newName);
    cout<<"new Name of Accound is :"<<myAccount.getName()<<endl;

    return 0;
}
