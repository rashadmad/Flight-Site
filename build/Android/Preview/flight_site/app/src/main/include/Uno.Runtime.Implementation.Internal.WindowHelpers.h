// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\UnoCore\0.38.2\source\uno\runtime\implementation\internal\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Platform{struct Window;}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct WindowHelpers;}}}}}
namespace Xli { class Window; }

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{
namespace Internal{

// public static class WindowHelpers :1717
// {
uClassType* WindowHelpers_typeof();
void WindowHelpers__GetPlatformWindowHandle_fn(::g::Uno::Platform::Window* wnd, ::Xli::Window** __retval);

struct WindowHelpers : uObject
{
    static ::Xli::Window* GetPlatformWindowHandle(::g::Uno::Platform::Window* wnd);
};
// }

}}}}} // ::g::Uno::Runtime::Implementation::Internal
