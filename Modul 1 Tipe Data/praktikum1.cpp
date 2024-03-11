#include <iostream>
using namespace std;

int main(){
    char op;
    float num1, num2;
    cout << " masukan operator (+,-,*,/): ";
    cin >> op;

    cout << " masukan dua angka ";
    cin >> num1 >> num2;

    switch (op)
    {
        case '+':
        cout << num1 + num2;
        break;

        case '-':
        cout << num1 - num2;
        break;
        
        case '*': 
        cout << num1 * num2;
        break;

        case '/':
        cout << num1 / num2;
        break;

        default:
        cout << "error! operator is not correc";
    }

    return 0;
}



