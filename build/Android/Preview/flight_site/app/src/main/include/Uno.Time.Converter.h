// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\UnoCore\0.38.2\source\uno\time\utilities\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Time{struct Converter;}}}

namespace g{
namespace Uno{
namespace Time{

// internal static class Converter :53
// {
uClassType* Converter_typeof();
void Converter__TicksToDays_fn(int64_t* ticks, int* __retval);

struct Converter : uObject
{
    static int TicksToDays(int64_t ticks);
};
// }

}}} // ::g::Uno::Time
