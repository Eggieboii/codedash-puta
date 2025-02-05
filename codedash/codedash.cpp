#include <iostream>
using namespace std;


void Items()
{
    int itemChoice;
    int photos = 0, props = 0, prints = 0;
    int price = 0;
    int totalPayment = 0;
    do
    {

        cout << "\n\n-----Welcome to creating Bundle-----\n\n"
            << "++++Available picks++++"
            << "1. photos :: 5 php\n"
            << "2. props  :: 7 php\n"
            << "3. prints :: 2 php\n"
            << ":: ";
        cin >> itemChoice;
        switch (itemChoice)
        {
        case 1:
            cout << "U picked Photo bundle :D " << endl;
            cin >> itemChoice;
            price += 5;
            break;

        case 2:
            cout << "U picked props bundle :D " << endl;
            cin >> itemChoice;
            price += 7;
            break;

        case 3:
            cout << "U picked prints bundle >:) " << endl;
            cin >> itemChoice;
            price += 2;
            break;

        default:
            cout << "Please pick from 1 to 3 only (1, 2, 3) " << endl;
            break;
        }
    } while (itemChoice > 0);

    totalPayment += price;

    int payment = 0;
    int computedPayment = price - payment;

    do {
        cout << "Your bill is " << price << " php " << "\n"
            << "Input Payment: ";
        cin >> payment;

        computedPayment -= payment;

        if (computedPayment < 0) {
            cout << "You have a change of $" << -computedPayment << ".\n";
        }
        else if (computedPayment == 0) {
            cout << "Payment Complete\n";
        }
        else {
            cout << "Insufficient pay! PAY UP!!!\n\n";
        }
    } while (computedPayment > 0);
}

void PaymentSystem()
{
    int price = 0;
    int payment = 0;
    int computedPayment = price - payment;

    do {
        cout << "Your bill is " << price << " php " << "\n"
            << "Input Payment: ";
        cin >> payment;

        computedPayment -= payment;

        if (computedPayment < 0) {
            cout << "You have a change of $" << -computedPayment << ".\n";
        }
        else if (computedPayment == 0) {
            cout << "Payment Complete\n";
        }
        else {
            cout << "Insufficient pay! PAY UP!!!\n\n";
        }
    } while (computedPayment > 0);
}

void newUser()
{
    char newChoice;

    cout << "Would you like to add new user? (Y/N): " << endl;
    cin >> newChoice;

    if (newChoice == 'Y' || newChoice == 'y')
    {
        string name;
        cout << "Enter your name: " << endl;
        cin >> name;

        Items();
        PaymentSystem();
    }
    else if (newChoice == 'N' || newChoice == 'n')
    {
        cout << "Thank you for using Our Bundle system. " << endl;
    }
    else
    {
        cout << "Input Error. Please Enter Y or N only. " << endl;
        newUser();
    }
}
void MainMenu()
{
    int mainMenu;
    cout << "1. Pick Bundle" << endl;
    cout << "2. Payment " << endl;
    cout << "3. New User " << endl;
    cin >> mainMenu;

    switch (mainMenu)
    {
    case 1:
        Items();
        break;

    case 2:
        PaymentSystem();
        break;
    }

}

int main()
{

    cout << "Welcome blyat" << endl;
    MainMenu();

    newUser();
    return 0;
}