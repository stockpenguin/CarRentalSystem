#include "Application.h"

#define REGISTER_NEW_USER 1
#define LOGIN_AS_USER 2
#define LOGIN_AS_ADMIN 3

using namespace std;

void Application::ClearConsole()
{
    system("clear");
}

Application::Application()
{
    userDatabase = UserDatabase();
    Start();
}

void Application::Start()
{
    ClearConsole();
    userDatabase.ReadUserDatabaseFile();
    PrintWelcomeScreen();
}

void Application::PrintWelcomeScreen()
{
    cout << "Welcome" << endl;
    cout << "Please Select An Option:" << endl;
    cout << endl;

    cout << "1. Register A New User" << endl;
    cout << "2. Login As User" << endl;
    cout << "3. Login As Admin" << endl;
    cout << endl;

    cout << "Your Option: ";

    int selection;
    cin >> selection;

    ClearConsole();
    HandleOptionSelected(selection); 
}

void Application::HandleOptionSelected(int selection)
{
    switch (selection)
    {
        case REGISTER_NEW_USER:
            cout << "You Selected: Register New User" << endl;
            cout << endl;
            RegisterNewUser();
            break;

        case LOGIN_AS_USER:
            cout << "You Selected: Login As User";
            cout << endl;
            break;

        case LOGIN_AS_ADMIN:
            cout << "You Selected: Login As Admin";
            cout << endl;
            break;
    }
}

void Application::RegisterNewUser()
{
    Customer customer = Customer();

    cout << "Please Type Your First Name: ";
    string firstName;
    cin >> firstName;
    customer.SetFirstName(firstName);

    cout << "Please Type Your Last Name: ";
    string lastName;
    cin >> lastName;
    customer.SetLastName(lastName);

    cout << "Please Create Your Username: ";
    string username;
    cin >> username;
    customer.SetUsername(username);

    userDatabase.RegisterNewUser(customer);
}