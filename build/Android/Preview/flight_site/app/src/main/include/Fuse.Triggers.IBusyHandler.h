// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Fuse.Triggers\0.38.6\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract interface IBusyHandler :79
// {
uInterfaceType* IBusyHandler_typeof();

struct IBusyHandler
{
    void(*fp_get_IsBusyHandled)(uObject*, bool*);
    static bool IsBusyHandled(const uInterface& __this) { bool __retval; return __this.VTable<IBusyHandler>()->fp_get_IsBusyHandled(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Triggers
