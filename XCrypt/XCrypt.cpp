#include "XCrypt.h"

XCrypt::XCrypt(): originalData("")
{
}

XCrypt::XCrypt(string data) : originalData(data)
{
}

void XCrypt::setData(string data)
{
    originalData = data;
}

string XCrypt::getData()
{
    return originalData;
}
