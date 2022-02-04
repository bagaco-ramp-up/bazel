#include <string>
#include <iostream>

using namespace std;

class CBase
{

public:
    CBase();

    unsigned int getCBaseAuthority();
    unsigned int getCBaseLevel();

private:
    unsigned int cbase_auth;
    unsigned int cbase_level;
};
