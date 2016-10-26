// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Uno.Threading\0.38.2\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct ThreadPool__WorkItem;}}}

namespace g{
namespace Uno{
namespace Threading{

// private abstract class ThreadPool.WorkItem :779
// {
struct ThreadPool__WorkItem_type : uType
{
    void(*fp_Invoke)(::g::Uno::Threading::ThreadPool__WorkItem*);
};

ThreadPool__WorkItem_type* ThreadPool__WorkItem_typeof();
void ThreadPool__WorkItem__ctor__fn(ThreadPool__WorkItem* __this);

struct ThreadPool__WorkItem : uObject
{
    void ctor_();
    void Invoke() { (((ThreadPool__WorkItem_type*)__type)->fp_Invoke)(this); }
};
// }

}}} // ::g::Uno::Threading
