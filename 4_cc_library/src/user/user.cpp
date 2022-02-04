#include "user.h"

User::User(string s1, string s2) : user_name(s1),
                                   user_test_build(s2){};

string User::getUserName()
{
    return this->user_name;
};

string User::getUserTestBuild()
{
    return this->user_test_build;
};

Data *User::getUserData()
{
    return this->user_data;
};

void User::setUserData(string s1, string s2)
{
    user_data = new Data(s1, s2);
};
