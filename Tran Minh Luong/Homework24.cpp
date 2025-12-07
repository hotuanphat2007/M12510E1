#include <iostream>
#include <stdexcept>
using namespace std;
class InsufficientFundsException : public exception {
public:
    const char* what() const noexcept override {
        return "Insufficient balance for withdrawal!";
    }
};
class InvalidAmountException : public exception {
public:
    const char* what() const noexcept override {
        return "Invalid amount! Amount must be greater than 0.";
    }
};
class BankAccount {
private:
    double balance;
public:
    BankAccount(double initialBalance = 0) : balance(initialBalance) {
        if (initialBalance < 0) throw InvalidAmountException();
    }
    void deposit(double amount) {
        if (amount <= 0) throw InvalidAmountException();
        balance += amount;
    }
    void withdraw(double amount) {
        if (amount <= 0) throw InvalidAmountException();
        if (amount > balance) throw InsufficientFundsException();
        balance -= amount;
    }
    double getBalance() const { return balance; }
};
int main() {
    try {
        double initial, withdrawAmount;
        cout << "Enter initial balance: ";
        cin >> initial;
        BankAccount acc(initial);
        cout << "Enter withdrawal amount: ";
        cin >> withdrawAmount;
        acc.withdraw(withdrawAmount);
        cout << "Withdrawal successful! New balance: " << acc.getBalance() << "\n";
    }
    catch (const exception& e) {
        cout << "Exception: " << e.what() << "\n";
    }
return 0;
}
