#include <iostream>
#include <string>
using namespace std;
class BankAccount{
    private:
    string accountHolder;
    double balance;
    static int totalAccounts;
    public:
    BankAccount(string h, double b){
        accountHolder=h;
        balance=b;
        totalAccounts++;
    }
    static int gettotalAccounts(){
        return totalAccounts;
    }
    void deposit(double amount){
        balance += amount;
        
    }
    void withdraw(double amount){
        balance -=amount;
    }
    static void showTotalAccounts(){
        cout<<totalAccounts;
    }
    void Display() const{
        cout << accountHolder << "'s balance: $" << balance << endl;
    }
    
    friend void transferMoney(BankAccount& sender, BankAccount& receiver, double amount);

};
int BankAccount :: totalAccounts = 0;

void transferMoney(BankAccount& sender, BankAccount& receiver, double amount){
    if (sender.balance >= amount) {
        sender.balance -= amount;   
        receiver.balance += amount; 
        cout << amount << "$ " <<" is sent from "<< sender.accountHolder << "to "<< receiver.accountHolder <<endl;
    } 
    else {
        cout << " Money is not sufficient to transfer " << endl;
    }
}
int main() {
    
    BankAccount acc1("Ali", 1000.0);
    BankAccount acc2("Vali", 500.0);

    BankAccount::showTotalAccounts();
    transferMoney(acc1, acc2, 300.0);
    return 0;
}