#include <iostream>
#include <string>
#include <map>
#include "defines.cpp"
using namespace std;
void add(FUNC_PARAMS)
{
    int *a, *b;
    a=(int*)param(PARAMTYPE_INT);
    b=(int*)param(PARAMTYPE_INT);
    
    int s=*a+*b;
    done(a);
    done(b);
    
    returns(&s, PARAMTYPE_INT); 
}

void concat(FUNC_PARAMS)
{
    string *a, *b;
    a = (string*)param(PARAMTYPE_STRING);
    b = (string*)param(PARAMTYPE_STRING);

    string *s = new string;
    *s = *a + *b;
    returns(s, PARAMTYPE_STRING);
}

// map<string, void*(FUNC_HEADER)> func_dict() 
// {
//     auto x = map<string, void*(FUNC_HEADER)>();
// }