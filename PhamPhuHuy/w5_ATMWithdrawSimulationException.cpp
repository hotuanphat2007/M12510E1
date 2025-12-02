#include <iostream>
#include <stdexcept>

using namespace std;

template<typename T>
void throwException(){
    throw T();
}

class InsufficientFundsException : public exception{
    public:
    const char* what() const noexcept override{
        return "Insufficient Amount.";
    }
};

class InvalidAmountException : public exception{
    public:
    const char* what() const noexcept override{
        return "Insufficient balance for withdrawal!";
    }
};

class BankAccount{
    private:
        float balance;
        BankAccount(){}
    public:
        BankAccount(double initialBalance):balance(initialBalance){
            if (balance < 0) {
                throwException<InsufficientFundsException>();
            }
        }

        double withDraw(float amount){
            balance -= amount;
            if(balance - amount < 0)
                throwException<InvalidAmountException>();
            return balance;
        }
};

int main(){
    float withdrawAmount = 0;
    float initialBalance;

    cout << "Enter initial balance: ";
    cin >> initialBalance;

    try{
        BankAccount account(initialBalance);
        cout << "Enter withdrawal amount: ";
        cin >> withdrawAmount;
        cout << "Balance: " << account.withDraw(withdrawAmount);
    }
    catch(const InvalidAmountException& ex){
        cout << "Caught exception: " << ex.what() << endl;
    }
    catch(const InsufficientFundsException& ex){
        cout << "Caught exception: " << ex.what() << endl;
    }

    return 0;
}