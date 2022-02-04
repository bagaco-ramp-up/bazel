#include "cbase.h"

CBase::CBase() : cbase_auth(1),
                 cbase_level(2){};

unsigned int CBase::getCBaseAuthority()
{
    return this->cbase_auth;
};

unsigned int CBase::getCBaseLevel()
{
    return this->cbase_level;
};
