#include <iostream>
#include"Account.h"

using namespace std;
int main()
{
    Account myAccount("naser"),myAccount2("Ahmad");
    cout<<"Initlal name of myAccount"<<myAccount.getName()<<endl;
    cout<<"Initlal name of myAccount2:"<<myAccount.getName()<<endl;
    string newName;
    cin>>newName;
    myAccount.setName(newName);
    cout<<"new Name of Accound is :"<<myAccount.getName()<<endl;

    return 0;
}
