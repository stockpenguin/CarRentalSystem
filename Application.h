#include <iostream>

#include "UserDatabase.h"

class Application
{
public:
    UserDatabase userDatabase;

    void ClearConsole();
    Application();
    void Start();
    void PrintWelcomeScreen();
    void HandleOptionSelected(int selection);
    void RegisterNewUser();
};