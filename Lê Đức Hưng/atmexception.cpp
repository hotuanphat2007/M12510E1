#include <iostream>
#include <exception>

using namespace std;

class InsufficientFundsException :public exception{
    public:
    const char* what() const noexcept override{
        return "the balance is not enough";
    }
};

class InvalidAmountException :public exception{
    public:
    const char* what() const noexcept override {
        return "invalid amount";
    }
};

class Bankaccount{
    private:
    double balance;
    public:
    Bankaccount(double initialbalance){
        if(initialbalance <0){
            throw InvalidAmountException();
        }
        balance=initialbalance;
    }
    void deposit(double amount){
        cout <<"Enter deposit: " ;
        cin >> amount;
        if(amount <0){
            throw InvalidAmountException();
        }
        balance += amount;
    }
    void withdraw(double amount){
        cout << "enter money withdraw: ";
        cin >> amount;
        if(amount <0){
            throw InvalidAmountException();
        }
         if(amount > balance){
            throw InsufficientFundsException();
        }
        balance -= amount;
    }

    double getbalance() const {
        return balance;
    }
};
    int main(){
        double initialbalance, amount;

        cout << "Enter initial balance: ";
        cin >> initialbalance;

        try{
            Bankaccount account(initialbalance);
            account.deposit(amount);
            account.withdraw(amount);
            cout << "Final balance: " << account.getbalance() << endl;
            }
    
    catch(const InsufficientFundsException& ex){
        cout << ex.what() << endl;
    }
    catch(const InvalidAmountException& ex){
        cout << ex.what() << endl;
    }
    return 0;
}