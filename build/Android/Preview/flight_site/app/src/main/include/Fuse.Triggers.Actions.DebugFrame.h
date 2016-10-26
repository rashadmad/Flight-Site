// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Fuse.Triggers\0.38.6\actions\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.ITaggedDebugProperty.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct DebugFrame;}}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class DebugFrame :184
// {
struct DebugFrame_type : uType
{
    ::g::Fuse::Triggers::Actions::ITaggedDebugProperty interface0;
};

DebugFrame_type* DebugFrame_typeof();
void DebugFrame__ctor__fn(DebugFrame* __this);
void DebugFrame__GetStringValue_fn(DebugFrame* __this, uString** __retval);
void DebugFrame__GetTag_fn(DebugFrame* __this, uString** __retval);
void DebugFrame__New1_fn(DebugFrame** __retval);

struct DebugFrame : uObject
{
    void ctor_();
    uString* GetStringValue();
    uString* GetTag();
    static DebugFrame* New1();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
