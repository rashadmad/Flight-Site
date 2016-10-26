// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Uno.Threading\0.38.2\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Threading{struct IDispatcherExtensions;}}}

namespace g{
namespace Uno{
namespace Threading{

// public static class IDispatcherExtensions :205
// {
uClassType* IDispatcherExtensions_typeof();
void IDispatcherExtensions__Invoke11_fn(uType* __type, uObject* dispatcher, uDelegate* func, void* arg);

struct IDispatcherExtensions : uObject
{
    template<class T>
    static void Invoke11(uType* __type, uObject* dispatcher, uDelegate* func, T arg) { IDispatcherExtensions__Invoke11_fn(__type, dispatcher, func, uConstrain(__type->U(0), arg)); }
};
// }

}}} // ::g::Uno::Threading
