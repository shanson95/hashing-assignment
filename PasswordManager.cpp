#include "PasswordManager.hpp"
#include <cstdlib>
#include <ctime>

// Constructor with key for encryption
PasswordManager::PasswordManager(const std::string& vcKey) : VCkey(vcKey) {
    // Random seed initializing
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

// Function to create a random 9-character password
std::string PasswordManager::randPassword() {
    std::string password;
    for (int i = 0; i < 9; ++i) {
        char randLetter = 'a' + (std::rand() % 26); // Random lowercase letters
        password += randLetter;
    }
    return password;
}

// Function to encrypt using the Vigenere Cipher
std::string PasswordManager::encryptPassword(const std::string& UEPassword) {
    std::string encryptedPassword;
    int keyLength = VCkey.length();

    // Iterating though each letter of the unencrypted password
    for (size_t i = 0; i < UEPassword.length(); ++i) {
        char UEChar = UEPassword[i];
        char VCkeyChar = VCkey[i % keyLength]; // Longer passwords would loop

        // Shifting UEChar by the value of VCkeyChar
        char encryptedChar = ((UEChar - 'a') + (VCkeyChar - 'a')) % 26 + 'a';

        encryptedPassword += encryptedChar;
    }

    return encryptedPassword;
}
