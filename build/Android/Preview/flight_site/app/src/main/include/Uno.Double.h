// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\UnoCore\0.38.2\source\uno\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public intrinsic struct Double :1870
// {
uStructType* Double_typeof();
void Double__Equals_fn(double* __this, uType* __type, uObject* o, bool* __retval);
void Double__GetHashCode_fn(double* __this, uType* __type, int* __retval);
void Double__Parse_fn(uString* str, double* __retval);
void Double__ToString_fn(double* __this, uType* __type, uString** __retval);

struct Double
{
    static bool Equals(double __this, uType* __type, uObject* o) { bool __retval; return Double__Equals_fn(&__this, __type, o, &__retval), __retval; }
    static int GetHashCode(double __this, uType* __type) { int __retval; return Double__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static uString* ToString(double __this, uType* __type) { uString* __retval; return Double__ToString_fn(&__this, __type, &__retval), __retval; }
    static double Parse(uString* str);
};
// }

}} // ::g::Uno
