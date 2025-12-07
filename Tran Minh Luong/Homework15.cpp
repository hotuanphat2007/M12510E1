#include <iostream>
#include <stdexcept>
using namespace std;
class InvalidAmountException : public exception {
public:
    const char* what() const noexcept override {
        return "Exception: Invalid amount entered!";
    }
};
class InsufficientFundsException : public exception {
public:
    const char* what() const noexcept override {
        return "Exception: Insufficient balance for withdrawal!";
    }
};
class BankAccount {
private:
    double balance;
public:
    BankAccount(double initialBalance) {
        if (initialBalance <= 0) {
            throw InvalidAmountException();
        }
        balance = initialBalance;
    }
    void deposit(double amount) {
        if (amount <= 0) {
            throw InvalidAmountException();
        }
        balance += amount;
        cout << "Deposited: " << amount << ". Current balance: " << balance << endl;
    }
    void withdraw(double amount) {
        if (amount <= 0) {
            throw InvalidAmountException();
        }
        if (amount > balance) {
            throw InsufficientFundsException();
        }
        balance -= amount;
        cout << "Withdrawn: " << amount << ". Remaining balance: " << balance << endl;
    }
    double getBalance() const {
        return balance;
    }
};
int main(){
    try {
        double initialBalance, withdrawAmount;
        cout << "Enter initial balance: ";
        cin >> initialBalance;
        BankAccount account(initialBalance);
        cout << "Enter withdrawal amount: ";
        cin >> withdrawAmount;
        account.withdraw(withdrawAmount);
    }
    catch (const InvalidAmountException& e) {
        cout << e.what() << endl;
    }
    catch (const InsufficientFundsException& e) {
        cout << e.what() << endl;
    }
    catch (...) {
        cout << "Unknown error occurred!" << endl;
    }
return 0;
}
