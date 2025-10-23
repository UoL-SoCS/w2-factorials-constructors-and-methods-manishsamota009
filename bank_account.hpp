
#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolderName;
    double balance;

public:
    // Constructor
    BankAccount(){
        // TODO: Implement the constructor
        cout << "Constructor" << endl;
        accountNumber = "";
        accountHolderName = "";
        balance = 0.0;
    }

   BankAccount(const std::string& accNumber, const std::string& accHolder, double initialBalance){
        // TODO: Implement the constructor
        accountNumber = accNumber;
        accountHolderName = accHolder;
        if (initialBalance < 0) {
            cout << "Initial Balance cannot be negative. Balance set to 0." << endl;
            balance = 0.0;
        }
        else {
            balance= initialBalance;
        }

    }

    // Deposit method
    void Deposit(double amount) {
        if(amount<0){
            cout <<"Negative amont is not premitted";
        }
        else{
        balance += amount;
        cout << "Current Balance: " << balance << endl;
        }
        
    }

    // Withdraw method
    void Withdraw(double amount) {
       if (amount <= balance) {
            balance -= amount;
        cout << "Current Balance: " << balance << endl;
        }
        else {
            cout << "Insufficnet Funds." << endl;
        }
    }

    // Display account information
    void DisplayAccountInfo() {
        // TODO: Implement the DisplayAccountInfo method
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: £" << balance << endl;
    }

    double GetBalance() const {
        std::cout << "Test" << std::endl;
        return balance;
    }
};
