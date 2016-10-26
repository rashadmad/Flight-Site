// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Uno.Threading\0.38.2\tasks\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct CancellationToken;}}}
namespace g{namespace Uno{namespace Threading{struct CancellationTokenSource;}}}

namespace g{
namespace Uno{
namespace Threading{

// internal sealed class CancellationTokenSource :9
// {
uType* CancellationTokenSource_typeof();
void CancellationTokenSource__ctor__fn(CancellationTokenSource* __this);
void CancellationTokenSource__Cancel_fn(CancellationTokenSource* __this);
void CancellationTokenSource__New1_fn(CancellationTokenSource** __retval);
void CancellationTokenSource__get_Token_fn(CancellationTokenSource* __this, ::g::Uno::Threading::CancellationToken** __retval);

struct CancellationTokenSource : uObject
{
    uStrong< ::g::Uno::Threading::CancellationToken*> _token;

    void ctor_();
    void Cancel();
    ::g::Uno::Threading::CancellationToken* Token();
    static CancellationTokenSource* New1();
};
// }

}}} // ::g::Uno::Threading
