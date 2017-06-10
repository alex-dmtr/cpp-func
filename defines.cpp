#define PARAMTYPE_INT 0
#define PARAMTYPE_STRING 1
#define PARAMTYPE_NUMBER 2
#define FUNC_PARAMS void*(*param)(int), void(*returns)(void*,int), void(*done)(void*)
#define FUNC_HEADER void*(int), void(void*,int), void(void*)