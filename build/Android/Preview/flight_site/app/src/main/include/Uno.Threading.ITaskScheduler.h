// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Uno.Threading\0.38.2\tasks\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct Task;}}}

namespace g{
namespace Uno{
namespace Threading{

// internal abstract interface ITaskScheduler :206
// {
uInterfaceType* ITaskScheduler_typeof();

struct ITaskScheduler
{
    void(*fp_ScheduleTask)(uObject*, ::g::Uno::Threading::Task*);
    static void ScheduleTask(const uInterface& __this, ::g::Uno::Threading::Task* task) { __this.VTable<ITaskScheduler>()->fp_ScheduleTask(__this, task); }
};
// }

}}} // ::g::Uno::Threading
