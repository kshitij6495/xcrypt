#include <iostream>
#include <string>
#include "XCrypt.h"

using namespace std;

int main()
{
    string data = (new XCrypt("Word"))->getData();
    cout << data << endl;
    return 0;
}
