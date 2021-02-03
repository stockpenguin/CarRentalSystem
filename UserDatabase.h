#include <vector>
#include <fstream>
#include <iostream>

#include "Customer.h"

class UserDatabase
{
private:
    vector<Customer> users;

public:
    void AddUserFromFile(string user);
    void ReadUserDatabaseFile();
    void WriteUserDatabaseFile();
    void RegisterNewUser(Customer customer);
};