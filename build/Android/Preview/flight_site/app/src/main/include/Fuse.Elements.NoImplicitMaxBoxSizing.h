// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Fuse.Elements\0.38.6\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.StandardBoxSizing.h>
namespace g{namespace Fuse{namespace Elements{struct NoImplicitMaxBoxSizing;}}}

namespace g{
namespace Fuse{
namespace Elements{

// internal sealed class NoImplicitMaxBoxSizing :521
// {
::g::Fuse::Elements::BoxSizing_type* NoImplicitMaxBoxSizing_typeof();
void NoImplicitMaxBoxSizing__ctor_2_fn(NoImplicitMaxBoxSizing* __this);
void NoImplicitMaxBoxSizing__New2_fn(NoImplicitMaxBoxSizing** __retval);

struct NoImplicitMaxBoxSizing : ::g::Fuse::Elements::StandardBoxSizing
{
    static uSStrong<NoImplicitMaxBoxSizing*> Singleton1_;
    static uSStrong<NoImplicitMaxBoxSizing*>& Singleton1() { return NoImplicitMaxBoxSizing_typeof()->Init(), Singleton1_; }

    void ctor_2();
    static NoImplicitMaxBoxSizing* New2();
};
// }

}}} // ::g::Fuse::Elements