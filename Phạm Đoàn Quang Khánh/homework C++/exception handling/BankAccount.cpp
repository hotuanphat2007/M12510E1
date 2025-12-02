#include <iostream>
#include <stdexcept>
#include <exception>
using namespace std;
class InsufficientFundsException:public exception
{
    public:
    const char* what() const noexcept override
    {
        return "So tien con lai khong du.";
    }
};
class InvalidAmountException:public exception
{
    public:
    const char* what() const noexcept override
    {
        return "So tien nhap vao khong hop le. Vui long kiem tra lai";
    }
};
class BankAccount
{
    private:
        double tiengui;
    public:
        BankAccount():tiengui(0){}
        BankAccount(double tien): tiengui(tien){}
        void xemsodu()
        {
            cout<<tiengui;
        }
        void guitien(double &gui)
        { 
            try
            {
                if(gui<0)
                {
                    throw InvalidAmountException();
                }
                tiengui+=gui;
                cout<<"Nap tien thanh cong. So tien moi la: "<<tiengui<<endl;
            }
            catch(const InvalidAmountException& e)
            {
                cerr<<"Da xay ra loi "<<e.what()<<endl;
            }
        }
        void ruttien(double &rut)
        {
            try
            {
                if(rut<0)
                {
                    throw InvalidAmountException();
                }
                if(rut>tiengui)
                {
                    throw InsufficientFundsException();
                }
                tiengui-=rut;
                cout<<"Rut tien thanh cong. So tien con lai la: "<<tiengui<<endl;
            }   
            catch(const exception& e)
            {
                cerr<<"Da xay ra loi "<<e.what()<<endl;
            }
        }
};
int main()
{
    double sotienbandau, tiengui, tienrut;
    int choice;
    BankAccount k1(10000);
    // cout<<"So tien ban dau:"<<endl;
    // cin>>sotienbandau;
    // k1=BankAccount(sotienbandau);
    cout<<"Ban muon: 1.Nap tien  2.Rut tien.  3.Xem so du ";
    cin>>choice;
    if (choice==1)
    {
        cout<<"So tien muon gui la:";
        cin>>tiengui;
        k1.guitien(tiengui);
    }
    else if (choice ==2)
    {
        cout<<"So tien muon rut la:";
        cin>>tienrut;
        k1.ruttien(tienrut);
    }
    else if (choice ==3)
    {
        cout<<"So du trong tai khoan la: ";
        k1.xemsodu();
    }
    return 0;

}