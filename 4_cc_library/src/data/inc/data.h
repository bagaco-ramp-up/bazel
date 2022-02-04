#include "cbase.h"

using namespace std;

class Data
{

public:
    Data(){};
    Data(string s1, string s2);

    string getDataID();
    string getDataCAS();
    CBase *getCBase();

private:
    string data_id;
    string data_cas;
    CBase *data_cbase;
};
