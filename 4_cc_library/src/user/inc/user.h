#include "data.h"

using namespace std;

class User
{
public:
    User(){};
    User(string s1, string s2);

    string getUserName();
    string getUserTestBuild();

    Data *getUserData();
    void setUserData(string s1, string s2);

private:
    string user_name;
    string user_test_build;
    Data *user_data;
};
