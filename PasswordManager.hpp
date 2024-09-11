#ifndef PASSWORDMANAGER_HPP
#define PASSWORDMANAGER_HPP
#include <string>

class PasswordManager {
private:
    std::string VCkey; // Key for the Vigenere Cipher

public:
    
    PasswordManager(const std::string& cvKey); // Constructor

    std::string randPassword(); // creates random 9-character password

    // Encrypting the password using the Vigenere Cipher
    std::string encryptPassword(const std::string& UEPassword);
};

#endif // PASSWORDMANAGER_HPP
