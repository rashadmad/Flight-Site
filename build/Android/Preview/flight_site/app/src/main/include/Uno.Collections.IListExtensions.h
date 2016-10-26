// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Uno.Collections\0.38.0\extensions\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Collections{struct IListExtensions;}}}

namespace g{
namespace Uno{
namespace Collections{

// public static class IListExtensions :285
// {
uClassType* IListExtensions_typeof();
void IListExtensions__AddRange_fn(uType* __type, uObject* self, uObject* collection);
void IListExtensions__Last_fn(uType* __type, uObject* self, uTRef __retval);
void IListExtensions__RemoveLast_fn(uType* __type, uObject* self, uTRef __retval);

struct IListExtensions : uObject
{
    static void AddRange(uType* __type, uObject* self, uObject* collection);
    template<class T>
    static T Last(uType* __type, uObject* self) { T __retval; return IListExtensions__Last_fn(__type, self, &__retval), __retval; }
    template<class T>
    static T RemoveLast(uType* __type, uObject* self) { T __retval; return IListExtensions__RemoveLast_fn(__type, self, &__retval), __retval; }
};
// }

}}} // ::g::Uno::Collections
