#include <stdio.h>
#include <windows.h>
#include "load.h"
int LoadRun(const char * const s, int i, int *mas, int size)
{

    int min;
    void * lib;
    int (*fun1)(int *mas, int size);
    int (*fun2)(int *matr, int size);
#ifndef WIN32
    lib = dlopen(s, RTLD_LAZY);
#else
    lib = LoadLibrary(s);
#endif
    if (!lib)
    {
        printf("cannot open library '%s'\n", s);
        return;
    }
    if (i==1)
    {

#ifndef WIN32
        fun1 = (void (*)(int *mas, int size))dlsym(lib, "masWork");
#else
        fun1 = (void (*)(int *mas, int size))GetProcAddress((HINSTANCE)lib, "masWork");
#endif
        if (fun1 == NULL)
        {
            printf("cannot load function \n");
        }
        else
        {
            fun1(mas, size);
        }

    }

    else if (i==2)
    {
#ifndef WIN32
        fun2 = (void (*)(int *matr, int size))dlsym(lib, "matrWork");
#else
        fun2 = (void (*)(int *matr, int size))GetProcAddress((HINSTANCE)lib, "matrWork");
#endif

        if (fun2 == NULL)
        {
            printf("cannot load function \n");
        }
        else
        {
            fun2(mas, size);
        }
    }
#ifndef WIN32
    dlclose(lib);
#else
    FreeLibrary((HINSTANCE)lib);
#endif
}
