// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Outracks{namespace Simulator{struct EnumerableHitTestExtension;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal static class EnumerableHitTestExtension :2060
// {
uClassType* EnumerableHitTestExtension_typeof();
void EnumerableHitTestExtension__HitTest2_fn(::g::Fuse::Visual* node, ::g::Uno::Float2* windowPoint, uObject** __retval);

struct EnumerableHitTestExtension : uObject
{
    static uObject* HitTest2(::g::Fuse::Visual* node, ::g::Uno::Float2 windowPoint);
};
// }

}}} // ::g::Outracks::Simulator
