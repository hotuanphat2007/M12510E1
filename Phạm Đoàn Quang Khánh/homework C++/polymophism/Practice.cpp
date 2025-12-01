//Giả lập app nhân sự 1 công ty
#include <iostream>
#include <string>
using namespace std;
class Employee //base class
{
    protected:
        int id;
        string name;
        string role;
    public:
        Employee(int so, string &ten, string &vitri): id(so), name(ten), role(vitri){}
        virtual void displayDetail()
        {
            cout<<"\nThong tin nhan vien:"<<endl;
            cout<<"Ma so nhan vien: "<<id<<endl;
            cout<<"Ten nhan vien: "<<name<<endl;
            cout<<"Vi tri: "<<role<<endl;
        }
};
class Manager : public Employee
{
    protected:
        string department;
    public:
        Manager(int so, string &ten, string &vitri, string &bophan): Employee(so, ten, vitri), department(bophan){}
        // {
        //     Employee(so, ten, vitri);
        //     department=bophan;
        // }
        void displayDetail()
        {
            Employee::displayDetail();
            cout<<"Bo phan: "<<department<<endl;
        }
};
class Director : public Manager
{
    protected:
        int reportees;
    public:
        Director(int so, string &ten, string &vitri, string &bophan, int baocao): Manager(so, ten, vitri, bophan), reportees(baocao){}
        void displayDetail()
        {
            Manager::displayDetail();
            cout<<"So luong nhan vien can bao cao: "<<reportees<<endl;
        }
};
int main()
{
    int stt, soNVbaocao;
    string tenNV, vitrilamviec, bophanphutrach;
    cout<<"Nhap vao ma so nhan vien: ";
    cin>>stt;
    cout<<"Nhap vao ten nhan vien: ";
    cin.ignore();
    getline(cin,tenNV);
    cout<<"Nhap vao vi tri dang lam: ";
    getline(cin,vitrilamviec);
    if (vitrilamviec=="manager")
    {
        cout<<"Nhap vao bo phan phu trach: ";
        //cin.ignore();
        cin>>bophanphutrach;
        Manager p(stt,tenNV,vitrilamviec,bophanphutrach);
        p.displayDetail();
    }
    else if (vitrilamviec=="director")
    {
        cout<<"Nhap vao bo phan phu trach: ";
        //cin.ignore();
        cin>>bophanphutrach;
        cout<<"Nhap so nhan vien kiem soat: ";
        cin>>soNVbaocao;
        Director k(stt,tenNV,vitrilamviec,bophanphutrach,soNVbaocao);
        k.displayDetail();
    }
    else
    {
        Employee t(stt, tenNV, vitrilamviec);
        t.displayDetail();
    }
    return 0;
}