#include <iostream>
using namespace std;
class calculator
{
public:
    float a, b;
    void display_program();
    void take_input();
    void addition();
    void subtraction();
    void multiplication();
    void division();
};
void calculator ::display_program()
{
    cout << "CHOOSE ANY ONE FOR PERFORMING OPERATION " << endl;
    cout << " 1. FOR ADDITION \n"
         << " 2. FOR SUBTRACTION \n"
         << " 3. FOR MULTIPLICATION \n"
         << " 4. FOR DIVISION " << endl;
}
void calculator ::take_input()
{
    cout << "Enter 1st number:" << endl;
    cin >> a;
    cout << "Enter 2nd number:" << endl;
    cin >> b;
}
void calculator ::addition()
{
    float sum = a + b;
    cout << "The sum of " << a << " and " << b << " is: " << sum << endl;
}
void calculator ::subtraction()
{
    float minus = a - b;
    cout << "The minus of " << a << " and " << b << " is: " << minus << endl;
}
void calculator ::multiplication()
{
    float multiply = a * b;
    cout << "The multiply of " << a << " and " << b << " is: " << multiply << endl;
}
void calculator ::division()
{
    float divide = a / b;
    cout << "The divide of " << a << " and " << b << " is " << divide << endl;
}
int main()
{
    calculator c;
    c.display_program();
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter two number for Addition" << endl;
        c.take_input();
        c.addition();
        break;

    case 2:
        cout << "Enter two number for subtraction" << endl;
        c.take_input();
        c.subtraction();
        break;

    case 3:
        cout << "Enter two number for multiplication" << endl;
        c.take_input();
        c.multiplication();
        break;

    case 4:
        cout << "Enter two number for division" << endl;
        c.take_input();
        c.division();
        break;
    default:
        cout << "SORRY you have entered invalid input PLZ try again !!";
    }
    return 0;
}
