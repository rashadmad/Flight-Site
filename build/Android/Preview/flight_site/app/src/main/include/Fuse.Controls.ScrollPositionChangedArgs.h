// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Fuse.Controls.ScrollView\0.38.6\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.UX.ValueChangedArgs-1.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollPositionChangedArgs;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class ScrollPositionChangedArgs :936
// {
uType* ScrollPositionChangedArgs_typeof();
void ScrollPositionChangedArgs__ctor_2_fn(ScrollPositionChangedArgs* __this, ::g::Uno::Float2* scrollPos, ::g::Uno::Float2* arrangeOffset, bool* isAdjustment, uObject* origin);
void ScrollPositionChangedArgs__get_ArrangeOffset_fn(ScrollPositionChangedArgs* __this, ::g::Uno::Float2* __retval);
void ScrollPositionChangedArgs__set_ArrangeOffset_fn(ScrollPositionChangedArgs* __this, ::g::Uno::Float2* value);
void ScrollPositionChangedArgs__get_IsAdjustment_fn(ScrollPositionChangedArgs* __this, bool* __retval);
void ScrollPositionChangedArgs__set_IsAdjustment_fn(ScrollPositionChangedArgs* __this, bool* value);
void ScrollPositionChangedArgs__New3_fn(::g::Uno::Float2* scrollPos, ::g::Uno::Float2* arrangeOffset, bool* isAdjustment, uObject* origin, ScrollPositionChangedArgs** __retval);
void ScrollPositionChangedArgs__get_Origin_fn(ScrollPositionChangedArgs* __this, uObject** __retval);
void ScrollPositionChangedArgs__set_Origin_fn(ScrollPositionChangedArgs* __this, uObject* value);

struct ScrollPositionChangedArgs : ::g::Uno::UX::ValueChangedArgs
{
    ::g::Uno::Float2 _ArrangeOffset;
    bool _IsAdjustment;
    uStrong<uObject*> _Origin;

    void ctor_2(::g::Uno::Float2 scrollPos, ::g::Uno::Float2 arrangeOffset, bool isAdjustment, uObject* origin);
    ::g::Uno::Float2 ArrangeOffset();
    void ArrangeOffset(::g::Uno::Float2 value);
    bool IsAdjustment();
    void IsAdjustment(bool value);
    uObject* Origin();
    void Origin(uObject* value);
    static ScrollPositionChangedArgs* New3(::g::Uno::Float2 scrollPos, ::g::Uno::Float2 arrangeOffset, bool isAdjustment, uObject* origin);
};
// }

}}} // ::g::Fuse::Controls
