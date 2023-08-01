#include<iostream>
#include<string>

using namespace std;

class BankAccount{
private:
    char CusName[50];
    char CusID[10];
    float accBalance=0.00;
    float wiAmount;
    float depoAmount;
public:

    void CusDetails()
    {
    cout<<"\nEnter Customer Name :: ";
    cin>>CusName;
    cout<<"\nEnter Customer ID   :: ";
    cin>>CusID;
    }

    float checkBalance()
    {
   return  accBalance;
    }



    float depositMoney(float amount)
    {
    depoAmount = amount;
    accBalance = depoAmount ;
    return depoAmount;
    }


    float withdrawMoney(float amount)
    {
    wiAmount = amount;
    accBalance = accBalance - wiAmount;
    return wiAmount;
    }

    void showInfo()
    {
    cout<<"\n\nCustomer Name   :: "<<CusName;
    cout<<"\n\nCustomer ID     :: "<<CusID;
    cout<<"\n\nDeposit Amount  :: "<<depoAmount;
    cout<<"\n\nWithdraw Amount :: "<<wiAmount;
    cout<<"\n\nAccount Balance ::" <<accBalance;
    }
};




int main()
{
    BankAccount customer1,customer2;
    customer1.CusDetails();
    customer1.checkBalance();
    customer1.depositMoney(50000.00);
    customer1.withdrawMoney(20000.00);
    customer2.CusDetails();
    customer2.checkBalance();
    customer2.depositMoney(15000.00);
    customer2.withdrawMoney(5000.00);

    customer1.showInfo();
    customer2.showInfo();
    return 0;
}
