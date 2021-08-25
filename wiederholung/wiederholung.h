#pragma once

struct TUser {
    char name_[40+1];
    char password_[40+1];
};
void wiederholung();
bool is_correct_password(TUser user);