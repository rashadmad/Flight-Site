// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\UnoCore\0.38.2\source\uno\exceptions\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{struct NotSupportedException;}}

namespace g{
namespace Uno{

// public sealed class NotSupportedException :282
// {
::g::Uno::Exception_type* NotSupportedException_typeof();
void NotSupportedException__ctor_3_fn(NotSupportedException* __this);
void NotSupportedException__ctor_4_fn(NotSupportedException* __this, uString* message);
void NotSupportedException__New4_fn(NotSupportedException** __retval);
void NotSupportedException__New5_fn(uString* message, NotSupportedException** __retval);

struct NotSupportedException : ::g::Uno::Exception
{
    void ctor_3();
    void ctor_4(uString* message);
    static NotSupportedException* New4();
    static NotSupportedException* New5(uString* message);
};
// }

}} // ::g::Uno
