// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Fuse.Elements\0.38.6\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct TranslationModes__OffsetMode__Subscriptions;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Elements{

// private sealed class TranslationModes.OffsetMode.Subscriptions :3210
// {
uType* TranslationModes__OffsetMode__Subscriptions_typeof();
void TranslationModes__OffsetMode__Subscriptions__ctor__fn(TranslationModes__OffsetMode__Subscriptions* __this);
void TranslationModes__OffsetMode__Subscriptions__New1_fn(TranslationModes__OffsetMode__Subscriptions** __retval);

struct TranslationModes__OffsetMode__Subscriptions : uObject
{
    uStrong< ::g::Fuse::Visual*> Relative;
    uStrong< ::g::Fuse::Elements::Element*> Target;
    uStrong< ::g::Fuse::Visual*> TargetParent;

    void ctor_();
    static TranslationModes__OffsetMode__Subscriptions* New1();
};
// }

}}} // ::g::Fuse::Elements
