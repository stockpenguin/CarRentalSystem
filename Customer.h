#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Customer
{
private:
    string firstName;
    string lastName;
    string username;

public:
    void SetFirstName(string firstName);
    string GetFirstName();
    void SetLastName(string lastName);
    string GetLastName();
    void SetUsername(string username);
    string GetUsername();

    bool UsernameIsValid();
};