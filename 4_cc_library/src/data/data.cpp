#include "data.h"

Data::Data(string s1, string s2) : data_id(s1),
                                   data_cas(s2)
{
    data_cbase = new CBase();
};

string Data::getDataID()
{
    return this->data_id;
};

string Data::getDataCAS()
{
    return this->data_cas;
};

CBase *Data::getCBase()
{
    return this->data_cbase;
};
