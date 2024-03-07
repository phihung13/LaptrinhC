#include <iostream>
using namespace std; 
 
int main()
{
    char kyTu;
    cout << "Nhap ky tu: ";
    cin >> kyTu;
    switch(kyTu) {
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        case 'i':
        case 'I':
        case 'a':
        case 'A':
        case 'e':
        case 'E':
            cout << "Ky tu " << kyTu << " la nguyen am" << endl;
            break;
        default:
            cout << "Ky tu " << kyTu << " la phu am" << endl;
    }
}
