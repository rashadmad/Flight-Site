// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\UnoCore\0.38.2\source\uno\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public intrinsic struct SByte :6110
// {
uStructType* SByte_typeof();
void SByte__Equals_fn(int8_t* __this, uType* __type, uObject* o, bool* __retval);
void SByte__GetHashCode_fn(int8_t* __this, uType* __type, int* __retval);
void SByte__ToString_fn(int8_t* __this, uType* __type, uString** __retval);

struct SByte
{
    static bool Equals(int8_t __this, uType* __type, uObject* o) { bool __retval; return SByte__Equals_fn(&__this, __type, o, &__retval), __retval; }
    static int GetHashCode(int8_t __this, uType* __type) { int __retval; return SByte__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static uString* ToString(int8_t __this, uType* __type) { uString* __retval; return SByte__ToString_fn(&__this, __type, &__retval), __retval; }
};
// }

}} // ::g::Uno
