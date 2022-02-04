#include <string>
#include <iostream>

#include "user.h"

using namespace std;

int main(int argc, char **argv)
{
    User *user = new User("bmw@workshop.org", "exercise_1");
    user->setUserData("2222", "4334");

    cout << "User: " << user->getUserName() << endl;
    cout << "User ID: " << user->getUserData()->getDataID() << endl;
    cout << "This is a test build: " << user->getUserTestBuild() << endl;

    return 0;
}
