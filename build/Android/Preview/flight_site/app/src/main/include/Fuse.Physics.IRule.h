// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Fuse.Physics\0.38.6\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Physics{struct World;}}}

namespace g{
namespace Fuse{
namespace Physics{

// internal abstract interface IRule :756
// {
uInterfaceType* IRule_typeof();

struct IRule
{
    void(*fp_Update)(uObject*, double*, ::g::Fuse::Physics::World*);
    static void Update(const uInterface& __this, double deltaTime, ::g::Fuse::Physics::World* world) { __this.VTable<IRule>()->fp_Update(__this, &deltaTime, world); }
};
// }

}}} // ::g::Fuse::Physics
