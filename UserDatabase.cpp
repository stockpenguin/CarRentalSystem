#include "UserDatabase.h"

void UserDatabase::RegisterNewUser(Customer customer)
{
    users.push_back(customer);
    WriteUserDatabaseFile();
}

void UserDatabase::WriteUserDatabaseFile()
{
    ofstream writeFile("users.txt");

    cout << "Users size: " << users.size() << endl;

    for (Customer customer : users)
    {
        writeFile << customer.GetFirstName() << "|" << customer.GetLastName() << "|" << customer.GetUsername() << "\n";
    }

    writeFile.close();
}

void UserDatabase::ReadUserDatabaseFile()
{
    string user = "";
    ifstream readFile("users.txt");

    while (getline(readFile, user))
    {
        AddUserFromFile(user);
    }

    readFile.close();
}

void UserDatabase::AddUserFromFile(string user)
{
    string firstName = "";
    string lastName = "";
    string username = "";

    int delimeterCount = 0;

    for (int i = 0; i < user.size(); i++)
    {
        if (user.at(i) != '|')
        {
            switch (delimeterCount)
            {
                case 0:
                    firstName += user.at(i);
                    break;
                    
                case 1:
                    lastName += user.at(i);
                    break;
                case 2:
                    username += user.at(i);
                    break;
            }
        }
        else
        {
            delimeterCount++;
        }
        
    }

    Customer customer = Customer();

    customer.SetFirstName(firstName);
    customer.SetLastName(firstName);
    customer.SetUsername(username);

    users.push_back(customer);
}