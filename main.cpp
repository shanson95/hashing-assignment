#include <iostream>
#include "PasswordManager.hpp"

int main() {
    PasswordManager pm("passwords");

    std::string password1 = pm.randPassword();
    std::string encryptedPassword1 = pm.encryptPassword(password1);
    std::cout << "Test 1: Generated password: " << password1 
    << "\n        Encrypted password: " << encryptedPassword1 << std::endl;


    std::string password2 = pm.randPassword();
    std::string encryptedPassword2 = pm.encryptPassword(password2);
    std::cout << "Test 2: Generated password: " 
    << password2 << "\n        Encrypted password: " << encryptedPassword2 << std::endl;

 
    std::string password3 = "plaintext"; 
    std::string encryptedPassword3 = pm.encryptPassword(password3);
    std::cout << "Test 3:  provided password: " 
    << password3 << "\n        Encrypted password: " << encryptedPassword3 << std::endl;

    return 0;
}