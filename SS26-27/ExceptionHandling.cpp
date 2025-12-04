#include <iostream>
#include <stdexcept>
using namespace std;

// Custom Exception 1
class InsufficientFundsException : public exception {
public:
    const char* what() const noexcept override {
        return "Insufficient balance for withdrawal!";
    }
};

// Custom Exception 2
class InvalidAmountException : public exception {
public:
    const char* what() const noexcept override {
        return "Invalid amount entered!";
    }
};

// BankAccount Class
class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) {
        if (initialBalance < 0) {
            throw InvalidAmountException();
        }
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount <= 0) {
            throw InvalidAmountException();
        }
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            throw InvalidAmountException();
        }
        if (amount > balance) {
            throw InsufficientFundsException();
        }
        balance -= amount;
    }
};

int main() {
    try {
        double initBalance, withdrawAmount;

        cout << "Enter initial balance: ";
        cin >> initBalance;

        BankAccount acc(initBalance);

        cout << "Enter withdrawal amount: ";
        cin >> withdrawAmount;

        acc.withdraw(withdrawAmount);

        cout << "Withdrawal successful!" << endl;
    }
    catch (const exception& e) {
        cout << "Exception: " << e.what() << endl;
    }
}
