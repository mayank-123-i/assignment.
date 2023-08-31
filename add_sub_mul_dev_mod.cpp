#include <iostream>
using namespace std;

class a
{
public:
    void add()
    {
        int a, b;

        cout << "Enter The value of a : ";
        cin >> a;

        cout << "Enter The value of b : ";
        cin >> b;

        cout << "The value of a + b is : " << a + b << endl;
        cout << "The value of a - b is : " << a - b << endl;
        cout << "" << endl;
    }
};

class b
{
public:
    void mul()
    {
        int a, b;

        cout << "Enter The value of a : ";
        cin >> a;

        cout << "Enter The value of b : ";
        cin >> b;

        cout << "The value of a * b is : " << a * b << endl;
        cout << "The value of a / b is : " << a / b << endl;
        cout << "" << endl;
    }
};

class c : public b, public a
{
public:
    void mo()
    {
        int a, b;

        cout << "Enter The value of a : ";
        cin >> a;

        cout << "Enter The value of b : ";
        cin >> b;

        cout << "The value of a % b is : " << a % b << endl;
    }
};

int main()
{
    c cobj;
    cobj.add();
    cobj.mul();
    cobj.mo();
}
