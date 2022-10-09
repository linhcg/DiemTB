#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float Toan, Van, Anh, DiemTB;
    do
    {
        cout << "Diem Toan: ";
        cin >> Toan;
    }while(Toan > 10 || Toan < 0);
    do
    {
        cout << "Diem Van: ";
        cin >> Van;
    }while(Van > 10 || Van < 0);
    do
    {
        cout << "Diem Anh: ";
        cin >> Anh;
    }while(Anh > 10 || Anh < 0);
    DiemTB = (Toan + Van + Anh) / 3;
    cout << fixed << setprecision(2) << DiemTB;
    return 0;
}