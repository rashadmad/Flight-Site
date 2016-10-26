// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Fuse.Triggers\0.38.6\actions\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public abstract interface IShow :914
// {
uInterfaceType* IShow_typeof();

struct IShow
{
    void(*fp_Show)(uObject*);
    static void Show(const uInterface& __this) { __this.VTable<IShow>()->fp_Show(__this); }
};
// }

}}}} // ::g::Fuse::Triggers::Actions
