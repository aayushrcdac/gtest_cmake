#include<iostream>
#include<cstring>
#include<string>
#include "../inc/InitSock.h"
#include "../../math/inc/add.h"

using namespace std;

int InitSocket(void)
{
    cout << "Init TCP Socket is done..." << endl;
    cout << "Socket calling ADD (10+10) : " << add(10,10) << endl;
    return 0;
}
