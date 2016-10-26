// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Uno.Threading\0.38.2\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Queue;}}}
namespace g{namespace Uno{namespace Threading{struct ConcurrentQueue;}}}
namespace g{namespace Uno{namespace Threading{struct Mutex;}}}

namespace g{
namespace Uno{
namespace Threading{

// public sealed class ConcurrentQueue<T> :1081
// {
struct ConcurrentQueue_type : uType
{
    ::g::Uno::IDisposable interface0;
};

ConcurrentQueue_type* ConcurrentQueue_typeof();
void ConcurrentQueue__ctor__fn(ConcurrentQueue* __this);
void ConcurrentQueue__get_Count_fn(ConcurrentQueue* __this, int* __retval);
void ConcurrentQueue__Dispose_fn(ConcurrentQueue* __this);
void ConcurrentQueue__Enqueue_fn(ConcurrentQueue* __this, void* item);
void ConcurrentQueue__get_IsEmpty_fn(ConcurrentQueue* __this, bool* __retval);
void ConcurrentQueue__New1_fn(uType* __type, ConcurrentQueue** __retval);
void ConcurrentQueue__TryDequeue_fn(ConcurrentQueue* __this, uTRef item, bool* __retval);

struct ConcurrentQueue : uObject
{
    uStrong< ::g::Uno::Threading::Mutex*> _mutex;
    uStrong< ::g::Uno::Collections::Queue*> _queue;

    void ctor_();
    int Count();
    void Dispose();
    template<class T>
    void Enqueue(T item) { ConcurrentQueue__Enqueue_fn(this, uConstrain(__type->T(0), item)); }
    bool IsEmpty();
    template<class T>
    bool TryDequeue(T* item) { bool __retval; return ConcurrentQueue__TryDequeue_fn(this, uConstrain(__type->T(0), item), &__retval), __retval; }
    static ConcurrentQueue* New1(uType* __type);
};
// }

}}} // ::g::Uno::Threading
