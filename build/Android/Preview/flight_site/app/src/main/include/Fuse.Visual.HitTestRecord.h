// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\FuseCore\0.38.6\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct HitTestResult;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Fuse{struct Visual__HitTestRecord;}}

namespace g{
namespace Fuse{

// private sealed class Visual.HitTestRecord :5398
// {
uType* Visual__HitTestRecord_typeof();
void Visual__HitTestRecord__ctor__fn(Visual__HitTestRecord* __this);
void Visual__HitTestRecord__HitTestCallback_fn(Visual__HitTestRecord* __this, ::g::Fuse::HitTestResult* result);
void Visual__HitTestRecord__New1_fn(Visual__HitTestRecord** __retval);

struct Visual__HitTestRecord : uObject
{
    uStrong< ::g::Fuse::Visual*> Visual;

    void ctor_();
    void HitTestCallback(::g::Fuse::HitTestResult* result);
    static Visual__HitTestRecord* New1();
};
// }

}} // ::g::Fuse
