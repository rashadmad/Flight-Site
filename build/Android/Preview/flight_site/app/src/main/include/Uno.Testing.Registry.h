// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Uno.Testing\0.38.2\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Testing{struct NamedTestMethod;}}}
namespace g{namespace Uno{namespace Testing{struct Registry;}}}

namespace g{
namespace Uno{
namespace Testing{

// public sealed class Registry :751
// {
uType* Registry_typeof();
void Registry__ctor__fn(Registry* __this);
void Registry__Add_fn(Registry* __this, uDelegate* method, uString* name, bool* ignore, uString* ignoreReason);
void Registry__get_Count_fn(Registry* __this, int* __retval);
void Registry__FindTest_fn(Registry* __this, uString* testName, ::g::Uno::Testing::NamedTestMethod** __retval);
void Registry__get_Item_fn(Registry* __this, int* index, ::g::Uno::Testing::NamedTestMethod** __retval);
void Registry__New1_fn(Registry** __retval);

struct Registry : uObject
{
    uStrong< ::g::Uno::Collections::List*> tests;

    void ctor_();
    void Add(uDelegate* method, uString* name, bool ignore, uString* ignoreReason);
    int Count();
    ::g::Uno::Testing::NamedTestMethod* FindTest(uString* testName);
    ::g::Uno::Testing::NamedTestMethod* Item(int index);
    static Registry* New1();
};
// }

}}} // ::g::Uno::Testing
