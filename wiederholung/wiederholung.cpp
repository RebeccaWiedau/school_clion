#include "wiederholung.h"
#include <cstring>
#include <iostream>

void wiederholung() {
    std::cout << "Hallo" << std::endl;
    int amount_user = 0;

    do {
        std::cout << "Bitte Anzahl der User eingeben: ";
        std::cin >> amount_user;
        if (std::cin.fail()) {
            std::cout << "Bitte nur Zahl eingeben" << std::endl;
            //TODO Verstehen
            std::cin.clear();
            std::cin.ignore(10, '\n');
        }
    } while (amount_user < 1);

    TUser *TUser_list = new TUser[amount_user];
    for (int i = 0; i < amount_user; i++) {
        std::cout << i + 1 << ". User:" << std::endl;
        std::cout << "Name: ";
        std::cin >> TUser_list[i].name_;
        std::cout << "Password: ";
        std::cin >> TUser_list[i].password_;
    }

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "\tUser:" << std::endl;
    std::cout << "\t-----" << std::endl;

    for (int i = 0; i < amount_user; i++) {
        std::cout << "\t" << i + 1 << "\t" << TUser_list[i].name_ << "\t" << TUser_list[i].password_ << "\t" << (is_correct_password(TUser_list[i]) ? "true" : "false") << std::endl;
        std::cout << std::endl;
    }
}

bool is_correct_password(TUser user) {
    size_t name_length = std::strlen(user.name_);
    for (int i = 0, j = name_length - 1; i < name_length; i++, j--) {
        if (user.name_[i] != user.password_[j]) {
            return false;
        }
    }
    return true;
}