// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\UnoCore\0.38.2\source\uno\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Byte2;}}

namespace g{
namespace Uno{

// public intrinsic struct Byte2 :932
// {
uStructType* Byte2_typeof();
void Byte2__Equals_fn(Byte2* __this, uType* __type, uObject* o, bool* __retval);
void Byte2__GetHashCode_fn(Byte2* __this, uType* __type, int* __retval);
void Byte2__ToString_fn(Byte2* __this, uType* __type, uString** __retval);

struct Byte2
{
    uint8_t X;
    uint8_t Y;

    bool Equals(uType* __type, uObject* o) { bool __retval; return Byte2__Equals_fn(this, __type, o, &__retval), __retval; }
    int GetHashCode(uType* __type) { int __retval; return Byte2__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return Byte2__ToString_fn(this, __type, &__retval), __retval; }
};
// }

}} // ::g::Uno
