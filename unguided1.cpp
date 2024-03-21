#include <iostream>
using namespace std;
//Main program
int main()
{
    char op;
    float num1, num2;
    cout<<"Masukkan Operator:";
    cin>>op;
    cout<<"\nMasukkan Bilangan ke-1:";
    cin>>num1;
    cout<<"Masukkan bilangan ke-2:";
    cin>>num2;

    switch(op)
    {
        case '+':
            cout<< num1 + num2;
            break;
        case '-':
            cout<< num1 - num2;
            break;
        default:
            cout<< "Error! operator is not correct";
    } 
return 0;
}