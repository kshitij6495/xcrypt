#ifndef XCRYPT_H
#define XCRYPT_H

#include <string>

using namespace std;

class XCrypt
{
public:
    XCrypt();
    XCrypt(string data);

    void setData(string data);
    string getData();

private:
    string originalData;
    string hashData;

};

#endif // XCRYPT_H
