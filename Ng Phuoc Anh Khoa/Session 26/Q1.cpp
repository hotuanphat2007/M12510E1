#include <iostream> 
using namespace std; 

class InsufficientFundsException {};
class InvalidAmountException {};

class BankAcount {
private: 
    int balance;
public: 
    BankAcount(int b =0): balance(b) {}

    void deposit (int amount ) {
        if (amount < 0) {
            throw InvalidAmountException();
        }
        balance += amount;
    }

    void withdraw (int amount) {
        if (amount <0 ) {
            throw InvalidAmountException();
        }
        if (balance < amount) {
            throw InsufficientFundsException();
        }
        balance -= amount;
    }

    int getBalance () {
        return balance;
    }
};

int main () {
    int initial,withdrawAmount;

    cout <<"Enter initial Balance: " ;
    cin >> initial;
    BankAcount b1(initial) ; 

    cout << "Enter withdraw amount: "; 
    cin >> withdrawAmount;

    try {
        b1.withdraw(withdrawAmount);
        cout << "Withdrawal successful! Remaining balance: " 
             << b1.getBalance() << endl;
    }
    catch (InvalidAmountException) {
        cout << "Exception: Invalid withdrawal amount!" << endl;
    }
    catch (InsufficientFundsException) {
        cout << "Exception: Insufficient balance for withdrawal!" << endl;
    }
    return 0;
}