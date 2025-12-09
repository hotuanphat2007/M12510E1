#include <iostream>
using namespace std;
int main()
{
    const char* str1 = "Hello world!";
    const char* str2 = "";
    const char* str3 = "line 1\n line 2";
    const wchar_t* wstr = L"Wide text";
    const char* raw = R"(C:\Program file\Myapp)";
    cout << "str1: "<<str1<<endl;
    cout << "str2: "<<str2<<endl;
    cout << "str3: "<<str3<<endl;
    wcout << L"wstr: "<<wstr<<endl;
    cout << "raw: "<<raw<<endl;
    return 0;
}