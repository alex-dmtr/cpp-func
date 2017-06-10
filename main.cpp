#include <iostream>
#include <cassert>
#include <vector>
#include <string>
#include "defines.cpp"
#include "add.cpp"

using namespace std;

vector<void*> pointers;
void* param(int param_type)
{
    void* x;

    switch (param_type)
    {
        case PARAMTYPE_INT:
            x = new int;
            cout << "Enter a number:";
            cin >> *(int*)x;
            break;
        case PARAMTYPE_STRING:
            x = new string;
            cout << "Enter a string:";
            cin >> *(string*)x;
            break;
    }

    pointers.push_back(x);

    return x;
}

void returns(void* p, int param_type)
{
    int x;
    string s;
    switch (param_type)
    {
        case PARAMTYPE_INT:
            x = *(int*)p;
            cout << x;
            break;
        case PARAMTYPE_STRING:
            s = *(string*)p;
            cout << s;
            break;
    }
}

void done(void* p)
{
    //delete (int*)p;
}

int main()
{
    concat(&param, &returns, &done);
}
