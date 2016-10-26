// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\UnoCore\0.38.2\source\uno\exceptions\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ArgumentException.h>
namespace g{namespace Uno{struct ArgumentNullException;}}

namespace g{
namespace Uno{

// public sealed class ArgumentNullException :91
// {
::g::Uno::Exception_type* ArgumentNullException_typeof();
void ArgumentNullException__ctor_5_fn(ArgumentNullException* __this, uString* paramName);
void ArgumentNullException__New6_fn(uString* paramName, ArgumentNullException** __retval);

struct ArgumentNullException : ::g::Uno::ArgumentException
{
    void ctor_5(uString* paramName);
    static ArgumentNullException* New6(uString* paramName);
};
// }

}} // ::g::Uno
