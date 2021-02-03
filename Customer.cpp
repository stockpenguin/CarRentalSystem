#include "Customer.h"

void Customer::SetFirstName(string firstName)
{
    this->firstName = firstName;
}

string Customer::GetFirstName()
{
    return this->firstName;
}

void Customer::SetLastName(string lastName)
{
    this->lastName = lastName;
}

string Customer::GetLastName()
{
    return this->lastName;
}

void Customer::SetUsername(string username)
{
    this->username = username;
}

string Customer::GetUsername()
{
    return this->username;
}

bool Customer::UsernameIsValid()
{
    // make sure username doesn't already exist
    return true;
}