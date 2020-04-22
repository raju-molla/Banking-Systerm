#include<iostream>
#include<conio.h>
using namespace std;

class Bank
{
    char name[30];
    char accname[30];
    char type[30];
    int ibalance;
    int dop;
    int with;
    int pass;
public:
    void menu();
    void get();
    void deposite();
    void check();
    void withdraw();
    void info();
};


void Bank::menu()
{
    int me;
    cout<< "\t\t\nChoose your option from 1 to 6\n";
    cout<< "\t1.Create a new account\n";
    cout<< "\t2.Deposite your money\n";
    cout<< "\t3.Check your balance\n";
    cout<< "\t4.Withdraw amount\n";
    cout<< "\t5.Your account's all information\n";
    cout<< "\t6.Exits ";
    cout<< "\n\t\t";
    cin>>me;
    switch(me)
    {
    case 1:
        get();
        break;
    case 2:
        deposite();
        break;
    case 3:
        check();
        break;
    case 4:
        withdraw();
        break;
    case 5:
        info();
    default:
        break;
    }

}

void Bank::get()
{
    int go;
    cout<< "\t\tEnter a name: ";
    cin>>name;
    cout<< "\n";
    cout<< "\t\tEnter account name: ";
    cin>>accname;
    cout<< "\n";
    cout<< "\t\tEnter type of account: ";
    cin>>type;
    cout<< "\n";
    cout<< "\t\tHow much money do you wanna deposite: ";
    cin>>ibalance;
    cout<< "\n";
    cout<< "\t\tEnter a new password: ";
    cin>>pass;
    cout<< "\n";
    cout<< "\t\tHit '0' for GoTo MainMenu: ";
    cout<< "\n\t\t";
    cin>>go;
    if(go==0){
        menu();
    }


}

void Bank::deposite()
{
    int password;
    cout<< "\t\tEnter your password: ";
    cin>>password;
    cout<< "\n";
    if(password==pass)
    {
    int go;
    cout<< "\t\tHow much money do you wanna deposite: ";
    cin>>dop;
    dop+=ibalance;
    cout<< "\n";
    cout<< "\t\tHit '0' for GoTo MainMenu: ";
    cout<< "\n\t\t";
    cin>>go;
    if(go==0){
        menu();
    }
    }

}

void Bank::check()
{
    int password;
    cout<< "\t\tEnter your password: ";
    cin>>password;
    cout<< "\n";
    if(password==pass)
    {
    int go;
    cout<< "\t\tYour current balance: "<<dop<<endl;
    cout<< "\n";
    cout<< "\t\tHit '0' for GoTo MainMenu: ";
    cout<< "\n\t\t";
    cin>>go;
    if(go==0){
        menu();
    }
    }

}


void Bank::withdraw()
{
    int password;
    cout<< "\t\tEnter your password: ";
    cin>>password;
    cout<< "\n";
    if(password==pass){

    int go;
    cout<< "\t\tHow much money do you wanna Withdraw: ";
    cin>>with;
    dop-=with;
    cout<< "\n";
    cout<< "\t\tHit '0' for GoTo MainMenu: ";
    cout<< "\n\t\t";
    cin>>go;
    if(go==0){
        menu();
    }
    }
}


void Bank::info()
{
    int password;
    cout<< "\t\tEnter your password: ";
    cin>>password;
    cout<< "\n";
    if(password==pass)
    {
  int go;
    cout<< "\t\tName of the deposite: "<<name<<"\n";
    cout<< "\n";
    cout<< "\t\tName of the account: "<<accname<<endl;
    cout<< "\n";
    cout<< "\t\tType of the account: "<<type<<endl;
    cout<< "\n";
    cout<< "\t\tThe amount in your account: "<<dop<<endl;
    cout<< "\n";
    cout<< "\t\tHit '0' for GoTo MainMenu: ";
    cout<< "\n\t\t";
    cin>>go;
    if(go==0){
        menu();
    }
    }

}

int main()
{
    Bank obj;
    obj.menu();
    getch();
    return 0;
}
